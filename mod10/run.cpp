#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   struct nameType
   {
      string first;
      string last;
   };
   struct courseType
   {
      string name;
      int callNum;
      int credits;
      char grade;
   };
   struct studentType
   {
      nameType name;
      double gpa;
      courseType course;
   };
   const int MAX_STUDENTS = 100;
   studentType student;
   studentType classList[MAX_STUDENTS];
   courseType course;
   nameType name;

   for (int j = 0; j < MAX_STUDENTS; j++)
      classList[j].name = name;

   return 0;
}