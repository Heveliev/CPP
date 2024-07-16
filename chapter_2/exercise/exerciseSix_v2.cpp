// exerciseSix_v2 -- programme for calculating the quantity of litres of petrol per 100 kilometers
#include <iostream>

using namespace std;

int main()
{
    double kilometers, liters, consumption;
    const int Distance = 100;

    cout << "Enter the distance traveled in kilometers and the gasoline used in liters\n";
    cout << "First the kilometers:" << " ";
    cin >> kilometers;
    cout << "Now the amount of fuel spent in liters:" << " ";
    cin >> liters;

    consumption = (liters / kilometers) * double (Distance);

    cout << "You spend" << " " << consumption << " "
         << "liters of gasoline on" << " " << Distance << " " << "kilometers";

    return 0;
}