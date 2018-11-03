// Programming Assignment #6
// This program will iterate through your specified range, adding 2 for each negative number and subtracting 1 for each positive number to a sum and then output that sum.
// William Winberg, Nov 2, 2018
// Sources: none

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int startingValue, endingValue;

  cout << "This program will iterate through your specified range, adding 2 for each negative number and subtracting 1 for each positive number to a sum and then output that sum." << endl;
  cout << "What will the starting value be?" << endl;
  cin >> startingValue;
  cout << "What will the ending value be?" << endl;
  cin >> endingValue;

  // initialize sum initial iteration
  int sum = 0;
  int i = startingValue;
  // decide what direction to itterate
  bool forward = startingValue < endingValue;

  // iterate through the specified range
  while ((i < endingValue && forward) || (i > endingValue && !forward))
  {
    if (i % 2 == 1) // when i is odd
    {
      sum += 2;
      cout << "Forward forward" << endl;
    }
    else // when i is even
    {
      sum--;
      cout << "Back" << endl;
    }
    // count forward or backward
    forward ? i++ : i--;
  }

  // output the sum
  cout << "The loop has complete with a total step count of " << sum << endl;
  return 0;
}