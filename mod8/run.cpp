#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   int times[30][7] = {0};
   int speed[15][7];
   int trees[100][7];
   int students[50][7];

   for (int i = 0; i < 30; i++)
   {
      for (int j = 0; j < 7; j++)
         cout << times[i][j] << " ";
      cout << endl;
   }
   return 0;
}
