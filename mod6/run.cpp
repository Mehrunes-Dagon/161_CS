#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void traceMe(double x, double y);
int main()
{
  double one, two;
  cout << "Enter two numbers: ";
  cin >> one >> two;
  cout << endl;
  traceMe(one, two);
  traceMe(two, one);
  return 0;
}
void traceMe(double x, double y)
{
  double z;
  if (x != 0)
    z = sqrt(y) / x;
  else
  {
    cout << "Enter a nonzero number: ";
    cin >> x;
    cout << endl;
    z = floor(pow(y, x));
  }
  cout << fixed << showpoint << setprecision(2);
  cout << x << ", " << y << ", " << z << endl;
}