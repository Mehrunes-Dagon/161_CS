// This program Programming Ex #8
// William Winberg
// Nov 26, 2018
// sources: none

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//function prototype
void openFile(ifstream &inFile);
int readData(ifstream &inFile, string names[], int votes[]);
void calculateTotal(int size, string names[], int votes[]);

int main()
{
   string months[13];
   int temperatures[12][2] = {0};
   int size = 0;

   ifstream inFile;

   cout << "This program will read a text file of months and cooresponding temperatures and output the highest and lowest temperatures for the year, and their corresponding months" << end;

   //open file
   openFile(inFile);
   //read from file
   size = readData(inFile, months, temperatures);
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
      cout << "File did not open! Program terminating!!";
      exit(0);
   }
}

//read from file
int readData(ifstream &inFile, string months[], int temps[][2])
{
   int size = 0;
   while (!inFile.eof())
   {
      inFile >> months[size] >> temps[size][0] >> temps[size][1];
      size++;
   }
   return size;
}

// finds and returns the high temperature and the corresponding month of the year
int averageHigh(int temp[][2], int rows, int &hightemp, int &month)
{
}

// finds and returns the low temperature and the corresponding month of the year
int averageLow(int temp[][2], int rows, int &lowtemp, int &month)
{
}
