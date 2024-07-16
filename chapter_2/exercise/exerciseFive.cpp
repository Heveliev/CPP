// exerciseFive -- program for converting Celsius to Fahrenheit temperatures

#include <iostream>

double celsiusToFahrenheit(double);

int main()
{
    using namespace std;

    double celsius;

    cout << "Please enter a Celsius value:" << " ";
    cin >> celsius;
    cout << celsius
    << " "
    << "degrees Celsius is"
    << " "
    << celsiusToFahrenheit(celsius)
    << " "
    << "degrees Fahrenheit."
    << endl;
    return 0;
}

double celsiusToFahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}