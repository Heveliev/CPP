// exerciseThree.cpp -- applications to convert degrees, minutes and seconds to decimal degrees

#include <iostream>

using namespace std;

int main()
{
    const int Minutes_to_degree = 60;
    const int Seconds_to_minute = 60;

    double degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, seconds:\n";
    cout << "First, enter the degrees:" << " ";
    cin >> degrees;
    cout << "Next, enter the minutes:" << " ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:" << " ";
    cin >> seconds;

    double decimal_degrees = degrees + (minutes + (seconds / Seconds_to_minute)) / Minutes_to_degree;

    cout << degrees << " " << "degrees" << "," << " "
         << minutes << " " << "minutes" << "," << " "
         << seconds << " " << "degrees" << " " << "="
         << " " << decimal_degrees << endl;

    return 0;

}