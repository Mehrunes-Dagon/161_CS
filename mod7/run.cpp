#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

enum CourseType
{
  ALGEBRA,
  BEGINNING_SPANISH,
  ASTRONOMY,
  GENERAL_CHEMISTRY,
  PHYSICS,
  LOGIC
};

CourseType main()
{
  string str;
  cin >> str;
  CourseType input = (CourseType)str;
  return input;
}
