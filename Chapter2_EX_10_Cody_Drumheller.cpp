/*
Title: Chapter 2 Exercise 10 Distance Per Tank of Gas
File Name: Chapter_2_EX_10_Cody_Drumheller
Programmer: Cody Drumheller
Date: 20241003
Requirements: Create a C++ program that does the following:
Miles per Gallon - Part A
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. 
Display the result on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used

*/

#include <iostream>
using namespace std;

    int main()
{
        double gallonsOfGas;
        double milesDriven;
        cout << " Enter the number of gallons of gas used: ";
        cin >> gallonsOfGas;
        cout << " Enter number of miles driven: ";
        cin >> milesDriven;
        double mpg = milesDriven / gallonsOfGas;
        cout << " The car gets " << mpg << " miles per gallon. " << endl;
        return 0;
}


