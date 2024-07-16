// exerciseSix -- a program to convert light-years to astronomical units

#include <iostream>

double light_yearsToAstronomical(double);

int main()
{
    using namespace std;

    double light_years;

    cout << "Enter the number of light years:" << " ";
    cin >> light_years;
    cout << light_years
    << " "
    << "light years ="
    << " "
    << light_yearsToAstronomical(light_years)
    << " "
    << "astronomical units."
    << endl;
    return 0;
}

double light_yearsToAstronomical(double light_years)
{
    return light_years * 63240;
}