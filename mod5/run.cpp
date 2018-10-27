// This is a demo of some simple 'while' loops in C++
// Author: Gayathri Iyer
// Date: 06/29/2014
// Sources: None

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int i, j;
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= (9 - i); j++) // loop B
      cout << " ";                 // loop B
    for (j = 1; j <= i; j++)
      cout << setw(1) << j;
    for (j = (i - 1); j >= 1; j--) // loop D
      cout << setw(1) << j;        // loop D
    cout << endl;
  }
  return 0;
}
//          1
//         2
//