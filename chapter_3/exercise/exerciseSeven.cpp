// exerciseSeven -- program for converting gasoline consumption from European standard to US standard

#include <iostream>

using namespace std;

int main()
{
    const double Miles_per_hundred_kilometers = 62.14;
    const double Gallon_to_liters = 3.875;

    double liters_spent, consumption;

    cout << "Enter the amount of gasoline consumed per 100 kilometers in liters:";
    cin >> liters_spent;

    consumption = Miles_per_hundred_kilometers * Gallon_to_liters / liters_spent;



    cout << "You’ve driven" << " " << consumption << " "
         << "miles per gallon of fuel";

    return 0;

}