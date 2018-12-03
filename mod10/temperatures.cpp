// Programming Assignment #9
// William Winberg
// Dec 2, 2018
// sources: none

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//define of the struct Temperature
struct Temperature
{
   string name;
   int highTemp;
   int lowTemp;
};

//function prototypes
int loadData(ifstream &infile, Temperature months[], int &size);
Temperature averageHigh(Temperature months[], int size);
Temperature averageLow(Temperature months[], int size);

int main()
{
   //var definitions
   const int MONTHS = 12;

   Temperature months[MONTHS];
   Temperature high, low;
   int size = 0;

   ifstream inFile;

   cout << "This program will read a text file of months and cooresponding temperatures and output the highest and lowest temperatures for the year, and their corresponding months." << endl;

   //read from file
   loadData(inFile, months, size);
   //finds and reads highest temp and according month
   high = averageHigh(months, size);
   cout << "The highest temperature of the year is " << high.highTemp << " degrees, found in " << high.name << endl;
   //finds and reads lowest temp and according month
   low = averageLow(months, size);
   cout << "The lowest temperature of the year is " << low.lowTemp << " degrees, found in " << low.name << endl;

   return 0;
}

//opens and reads file
int loadData(ifstream &inFile, Temperature months[], int &size)
{
   const int MAXCHAR = 101;
   cout << "'loadData' called" << endl;
   //open file
   char filename[MAXCHAR];
   cout << "Enter filename: ";
   cin.get(filename, MAXCHAR);
   inFile.open(filename);
   if (!inFile)
   {
      cout << "Unable to open file!";
      exit(0);
      return 1;
   }
   //read file
   while (!inFile.eof())
   {
      inFile >> months[size].name >> months[size].highTemp >> months[size].lowTemp;
      size++;
   }
   cout << size << " months read from the file." << endl;
   return 0;
}

//finds and returns the struct with the highest temperature
Temperature averageHigh(Temperature months[], int size)
{
   cout << "'averageHigh' called" << endl;
   Temperature highest = months[0];

   for (int i = 1; i < size; i++)
   {
      if (months[i].highTemp > highest.highTemp)
      {
         highest = months[i];
      }
   }
   return highest;
}

//finds and returns the struct with the lowest temperature
Temperature averageLow(Temperature months[], int size)
{
   cout << "'averageLow' called" << endl;
   Temperature lowest = months[0];

   for (int i = 1; i < size; i++)
   {
      if (months[i].lowTemp < lowest.lowTemp)
      {
         lowest = months[i];
      }
   }
   return lowest;
}
