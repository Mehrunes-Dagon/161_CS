// Programming Ex #8
// William Winberg
// Nov 26, 2018
// sources: none

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//function prototypes
void openFile(ifstream &inFile);
int loadData(ifstream &inFile, string months[], int temps[][2], int &rows);
int averageHigh(int temp[][2], int rows, int &hightemp, int &month);
int averageLow(int temp[][2], int rows, int &lowtemp, int &month);

int main()
{
   string months[13];
   int temps[12][2] = {0};
   int rows = 0;
   int highTemp, lowTemp, month;

   ifstream inFile;

   cout << "This program will read a text file of months and cooresponding temperatures and output the highest and lowest temperatures for the year, and their corresponding months." << endl;

   //open file
   openFile(inFile);
   //read from file
   loadData(inFile, months, temps, rows);
   //finds and reads highest temp and according month
   averageHigh(temps, rows, highTemp, month);
   cout << "The highest temperature of the year is " << highTemp << " degrees, found in " << months[month] << endl;
   //finds and reads lowest temp and according month
   averageLow(temps, rows, lowTemp, month);
   cout << "The lowest temperature of the year is " << lowTemp << " degrees, found in " << months[month] << endl;

   return 0;
}

//open file
void openFile(ifstream &inFile)
{
   char filename[101];
   cout << "Enter filename:";
   cin.get(filename, 101);
   inFile.open(filename);
   if (!inFile)
   {
      cout << "Unable to open file!";
      exit(0);
   }
}

//read from file
int loadData(ifstream &inFile, string months[], int temps[][2], int &rows)
{
   while (!inFile.eof())
   {
      inFile >> months[rows] >> temps[rows][0] >> temps[rows][1];
      rows++;
   }
   cout << "'loadData' called" << endl;
   cout << rows << " months read from the file." << endl;
   return rows;
}

// finds and returns the high temperature and the corresponding month of the year
int averageHigh(int temps[][2], int rows, int &highTemp, int &month)
{
   cout << "'averageHigh' called" << endl;
   highTemp = temps[0][0];

   for (int i = 1; i < rows; i++) {
      if (temps[i][0] > highTemp) {
         highTemp = temps[i][0];
         month = i;
      }
   }
   return highTemp;
}

// finds and returns the low temperature and the corresponding month of the year
int averageLow(int temps[][2], int rows, int &lowTemp, int &month)
{
   lowTemp = temps[0][1];

   for (int i = 1; i < rows; i++) {
      if (temps[i][1] < lowTemp) {
         lowTemp = temps[i][1];
         month = i;
      }
   }
   return lowTemp;
}
