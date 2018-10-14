//This program demos simple data types and how to read and output them
#include <iostream>
#include <string>

using namespace std;

int main()
{
  //variable declarations
  int num1 = 5, num2 = 10;
  float fnum1 = 1.45, fnum2 = 2.345;
  char answer = ' ';
  string name = " ";

  //read them from the user.
  cout << "Enter 2 whole numbers separated by a space and we will calculate the sum:";
  cin >> num1 >> num2;
  cout << "Enter a real number:";
  cin >> fnum1;
  cout << "Enter another real number:";
  cin >> fnum2;
  cout << "Are you ready for your result?";
  cin >> answer;
  cout << "Enter your name:";
  cin >> name;

  //calculate the result and output
  cout << "Hello!! " << name << "!!" << endl;
  cout << "Quotient of the 2 whole numbers = " << static_cast<float>(num1) / num2 << endl;
  cout << "Difference of the 2 real numbers = " << fnum1 - fnum2 << endl;

  return 0;
}