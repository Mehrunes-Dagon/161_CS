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
  float width, height, area;
  char reply;

  do
  {
    // get size from user
    cout << "What is the diaganal length of the screen in inches?" << endl;
    cin >> diagLength;
    // check for input failure
    while (!cin)
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input. (integer or decimal)." << endl;
      cin >> diagLength;
    }
    // get screen type from user
    cout << "What type of screen would you like specs for?" << endl
         << "1.) Traditional" << endl
         << "2.) HD" << endl
         << "3.) Both" << endl;
    cin >> typeSelector;
    // check for input failure
    while (typeSelector < 1 || typeSelector > 3)
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input. ('1', '2' or '3')" << endl;
      cin >> typeSelector;
    }

    // list users requested specifications
    while (typeSelector)
    {
      if (typeSelector == 1 || typeSelector == 3)
      {
        // calculate height and width using pathagorain theorem
        // (4x)^2(3x)^2=diaglength^2
        // 25x=bigNum
        // ratio=bigNum/25
        type = "Traditional TV";
        float ratio = (diagLength * diagLength) / 25;
        width = 4 * sqrt(ratio);
        height = 3 * sqrt(ratio);
        area = width * height;
      }
      else if (typeSelector == 2)
      {
        type = "HD TV";
        float ratio = (diagLength * diagLength) / 337;
        width = 16 * sqrt(ratio);
        height = 9 * sqrt(ratio);
        area = width * height;
      }

      // set precision and output result
      cout << fixed << showpoint << setprecision(1);
      cout << "The specifications of your " << type << " are:" << endl
           << "Width: " << width << " inches" << endl
           << "Height: " << height << " inches" << endl
           << "Area: " << area << " square inches" << endl
           << endl;

      // if user wants to see both, restart loop to output option 2 as well
      if (typeSelector == 3)
      {
        typeSelector = 2;
        continue;
      }
      // break the loop if not option 3
      break;
    }

    // check if reapeat desired
    cout << "Want to check another screen? (y/n)";
    cin >> reply;
  } while (reply == 'y');

  cout << "Enter any key to quit";
  cin >> reply;
  return 0;
}
