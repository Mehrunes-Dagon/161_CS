// This program logs hello to the console.
// William Winberg, Oct 5, 2018
// This program was copied from the "Customize a Hello World program.pdf"
// I learned how to compile and run a C program during my time in Lambda School and C++ is done the same

#include <iostream>
#include <string>

using namespace std;

int main()
{
  char reply;
  string lname;
  string fname;

  cout << "Hello, World!" << endl;
  cout << "Please enter your last name: ";
  cin >> lname;
  cout << "Please enter your first name: ";
  cin >> fname;
  cout << "Welcome " << fname << " " << lname << " to CS161!" << endl;

  // This section stops the program
  cout << "Press any key followed by Enter to quit: ";
  cin >> reply;
  return 0;
}