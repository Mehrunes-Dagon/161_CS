// CS 161 Programming Assignment #4
// Given the the speed of two cars and the duration of which they drive away from eachother at a right angle, returns the distance they will be from eachother in miles.
// Oct 22, 2018; William Winberg
// Sources: None.

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
  float carASpeed, carBSpeed;
  int hours, minutes;
  float carADistance, carBDistance, distanceBetween;

  // get input from user
  cout << "What is the average speed of car A in mph?" << endl;
  cin >> carASpeed;
  cout << "What is the average speed of car B in mph?" << endl;
  cin >> carBSpeed;
  cout << "Please enter the elapsed time after the cars leave the intersection in 'HH MM' format" << endl;
  cin >> hours >> minutes;

  // calculate formula
  carADistance = carASpeed * hours + (carASpeed * minutes / 60);
  carBDistance = carBSpeed * hours + (carBSpeed * minutes / 60);
  distanceBetween = sqrt((carADistance * carADistance) + (carBDistance * carBDistance));

  // set precision and output result
  cout << fixed << showpoint << setprecision(3);
  cout << "The distance between the cars after " << hours << " hours and " << minutes << " minutes is " << distanceBetween << " miles." << endl;

  return 0;
}
