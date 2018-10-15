// CS 161 Programming Assignment #3
// Given the current and resistance of a circut, this program outputs the voltage needed to supply it.
// Oct 14, 2018; William Winberg
// Source: https://www.physics.uoguelph.ca/tutorials/ohm/Q.ohm.intro.html

#include <iostream>
using namespace std;

int main()
{
    int current, resistance, voltage;

    // get input from user
    cout << "Please enter the current in amps." << endl;
    cin >> current;
    cout << "Please enter the resistance in ohms." << endl;
    cin >> resistance;

    // calculate formula
    voltage = current * resistance;
    // output result
    cout << voltage << " volts are needed to supply this circut." << endl;

    return 0;
}