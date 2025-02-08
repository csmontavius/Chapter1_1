/*
Program File Name: Chapter1_1
Programmer: Montavius Spratley Burford
Date: 1/26/2025
Requirments: Copy the following program and enter into a new 
project in Visual Studio - Make sure it successfully executes - 
Then post to GitHub and enter the URL in the submission.
*/

// This program calculates the user's pay.
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}