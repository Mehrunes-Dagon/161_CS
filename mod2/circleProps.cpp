//Get the radius of a circle from the user and write a program to calculate the area and circumference of the circle.
//Goals for this program - define variables and their data types, use constants, calculate data and output to the user.
//Area = PI*r*r
//Circumference = 2*PI*r
#include <iostream>
using namespace std;

//global constants
const double PI = 3.14159;

int main()
{
  double radius = 0, area = 0, circumference = 0;
  //read from the user
  cout << "Please enter the radius of the circle:";
  cin >> radius;
  //calculate area and circumference
  area = PI * radius * radius;
  circumference = 2 * PI * radius;
  //output to the user
  cout << "Area = " << area << " sq units" << endl;
  cout << "Circumference = " << circumference << " units" << endl;

  return 0;
}