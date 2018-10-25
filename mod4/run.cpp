#include <iostream>
using namespace std;
int main()
{
  double firstNum, secondNum;
  cout << "Enter two nonzero numbers: ";
  cin >> firstNum >> secondNum;
  cout << endl;

  if (firstNum == 0 || secondNum == 0)
    cout << "Both numbers must be nonzero!" << endl;
  else if (firstNum > secondNum)
    cout << firstNum / secondNum << endl;
  else if (firstNum < secondNum)
    cout << secondNum / firstNum << endl;
  else
    cout << firstNum * secondNum << endl;

  return 0;
}