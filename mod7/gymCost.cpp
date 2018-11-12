// Programming Assignment #7
// This program will determine the cost of a gym membership given the users specifications
// William Winberg, Nov 11, 2018
// Sources: none

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//function prototypes
void getUserInfo(int &months, int &trainings, char &senior);
string information();
double calculateCost(int months, int trainings, char senior);
void charToUpper(char &character);

int main()
{ 
  // var to continue or break the loop
  char continueProgram;

  // direct user and init continueProgram
  cout << "Hello! Given your desired specifications, this program will calculate your gym membership cost." << endl;
  cout << "Would you like to calculate your membership cost(c) or exit the program(q)?" << endl;
  cin >> continueProgram;
  // treat all chars as uppercase
  charToUpper(continueProgram);

  // loop continuously until a 'q' or 'Q' is entered
  while (continueProgram != 'Q')
  {
    // handle invalid input, restart loop
    if (continueProgram != 'C')
    {
      cout << "Must enter valid input, continue(c) or quit(q)." << endl;
      cin >> continueProgram;
      charToUpper(continueProgram);
      cin.clear();
      cin.ignore(100, '\n');
      continue;
    }

    // re init vars on each iteration
    double total = 0;
    int months = 0, trainings = 0;
    char senior = 'N';

    // display info
    cout << information() << endl;
    // get info from user
    getUserInfo(months, trainings, senior);
    // calculate total cost
    total = calculateCost(months, trainings, senior);

    // make output uniform
    cout << fixed << showpoint << setprecision(2);
    cout << "Your total cost is $" << total << endl
         << endl;

    // user select to continue or break loop
    cout << "Would you like to run through again(c) or quit(q)?" << endl;
    cin >> continueProgram;
    charToUpper(continueProgram);
  }

  // exit program
  cout << "Program terminated" << endl;
  return 0;
}

// displays info to console
string information()
{
  return "Membership: $50.00\n"
         "Training session: $30\n"
         "Senior Discount: 25%\n"
         "15% discount with 12 month membership\n"
         "20% discount with 5 training sessions\n";
}

// promps user for input
void getUserInfo(int &months, int &trainings, char &senior)
{
  // input for info until all required info is entered
  while (!months || !trainings || !senior)
  {
    // get desired length of membership
    cout << "How many months of a membership would you like?" << endl;
    cin >> months;
    // prompt user to reenter when input is invalid
    while (!cin)
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input." << endl;
      cin >> months;
    }
    // get desired amount of training sessions
    cout << "How many personal training sessions do you want?" << endl;
    cin >> trainings;
    // prompt user to reenter when input is invalid
    while (!cin)
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input." << endl;
      cin >> trainings;
    }
    // get senior info
    cout << "Are you a senior? (y/n)" << endl;
    cin >> senior;
    charToUpper(senior);
    // prompt user to reenter when input is invalid
    while (!cin || (senior != 'Y' && senior != 'N'))
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Enter valid input." << endl;
      cin >> senior;
      charToUpper(senior);
    }
  }
}

// performs neccesary logic
double calculateCost(int months, int trainings, char senior)
{
  double grandTotal, monthsTotal, trainingsTotal;

  // monthly cost
  monthsTotal = months * 50;
  if (months >= 12) // if 12 months or more
    monthsTotal *= 0.85;

  // trainings cost
  trainingsTotal = trainings * 30;
  if (trainings >= 5) // if at least 5
    trainingsTotal *= 0.8;

  // total cost
  grandTotal = monthsTotal + trainingsTotal;
  if (senior == 'Y') // if a senior
    grandTotal *= 0.75;

  // returns grand total
  return grandTotal;
}

//function to convert string to upper case
void charToUpper(char &character)
{
  character = toupper(character);
}
