//This program demos selection sort
//Gayathri Iyer
//12-September-2014
//Sources:None
#include <iostream>
#include <string>
using namespace std;

const int CAP = 10;
double heights[10] = {5.2, 6.3, 5.8, 4.9, 2.5, 2.7, 6.7, 7.1, 5.10, 6.0};

//function prototype
void selectionSort(int list[]);

int main()
{
  int list[CAP] = {6, 45, 76, 1, 4, 129, 9, 19, 12, 2123};
  string seasons[4] = {"fall", "winter", "spring", "summer"};
  selectionSort(list);

  //print the list
  for (int i = 0; i < CAP; i++)
    cout << list[i] * 2 << " " << list[i += 1] << endl;
  cout << list[9];

  return 0;
}

void selectionSort(int list[])
{
  int smallIndex = 0, loc = 0, temp = 0;
  for (int i = 0; i < CAP - 1; i++)
  {
    //find the smallest
    smallIndex = i;
    for (loc = i + 1; loc < CAP; loc++)
    {
      if (list[loc] < list[smallIndex])
        smallIndex = loc;
    }
    //swap the 2 numbers (i and smallIndex)
    temp = list[smallIndex];
    list[smallIndex] = list[i];
    list[i] = temp;
  }
}