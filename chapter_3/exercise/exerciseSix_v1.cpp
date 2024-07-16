// exerciseSix_v1 -- program for calculating miles per halon
#include <iostream>

using namespace std;

int main()
{
    double miles, gallons, consumption;

    cout << "Enter the distance you have traveled in miles and the spent gasoline in gallons:\n";
    cout << "First the miles:" << " ";
    cin >> miles;
    cout << "Now the amount of fuel spent in gallons:" << " ";
    cin >> gallons;

    consumption = miles / gallons;

    cout << "You’ve driven" << " " << consumption << " "
         << "miles per gallon of fuel";

    return 0;
}