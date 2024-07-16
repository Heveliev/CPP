// exerciseOne.cpp -- inches to feet growth converter

#include <iostream>

using namespace std;

int main()
{
    const int Inches_per_feet = 12;
    int inches;

    cout << "Enter your height in inches:___\b\b\b";
    cin >> inches;
    int feet = inches / Inches_per_feet;
    int rest_inches = inches % Inches_per_feet;
    cout << "Your height in feet is equal:" << " "
        << feet << "\'" << rest_inches << "\"";

    return 0;
}