// CS 161 Programming Assignment #5
// Given the the diaganal length and type of screen, this function outputs the width, height and area specifications of the screen.
// Oct 26, 2018; William Winberg
// Sources: None.

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  float diagLength;
  int typeSelector;
  string type;

  do {
    // get input from user
    cout << "What is the diaganal length of the screen in inches" << endl;
    cin >> diagLength;
    // check for input failure
    while (!cin) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input. (integer or decimal)";
      cin >> diagLength;
    }

    cout << "What type of screen would you like specs for? 1-Traditional; 2-HD; 3-Both (enter a single integer)" << endl;
    cin >> typeSelector;
    while (!cin) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input. ('1', '2' or '3')";
      cin >> typeSelector;
    }

    // assign type variable
    switch (typeSelector) {
      case 1: type = "Traditional TV";
      case 2: type = "HD TV";
      case 3: type = "Both types of TVs";
    }

  } while (reply == 'y');

  // // calculate formula
  // carADistance = carASpeed * hours + (carASpeed * minutes / 60);
  // carBDistance = carBSpeed * hours + (carBSpeed * minutes / 60);
  // distanceBetween = sqrt((carADistance * carADistance) + (carBDistance * carBDistance));

  // // set precision and output result
  // cout << fixed << showpoint << setprecision(3);
  // cout << "The distance between the cars after " << hours << " hours and " << minutes << " minutes is " << distanceBetween << " miles." << endl;

  cout << "Press any key to quit";
  cin >> reply;
  return 0;
}
