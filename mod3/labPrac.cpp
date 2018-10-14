#include <iostream>

using namespace std;

int main()
{
  int age;
  string name;

  cin >> age;
  getline(cin, name);

  cout << "age:" << age << ":" << endl;
  cout << "name:" << name << ":" << endl;

  return 0;
}