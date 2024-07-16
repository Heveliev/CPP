// exerciseFour.cpp -- applications to translate seconds into days, hours, minutes, seconds

#include <iostream>

using namespace std;

int main()
{
    long long incoming_seconds;
    const int Seconds_in_minute = 60;
    const int Minutes_in_hour = 60;
    const int Hours_in_day = 24;
    int seconds, minutes, hours, days;

    cout << "Enter the number of seconds:" << " ";
    cin >> incoming_seconds;
    seconds = int (incoming_seconds % Seconds_in_minute);
    minutes = int (incoming_seconds / Seconds_in_minute) % Minutes_in_hour;
    hours = int (incoming_seconds / Seconds_in_minute) / Minutes_in_hour % Hours_in_day;
    days = (int (incoming_seconds / Seconds_in_minute) / Minutes_in_hour) / Hours_in_day;

    cout << incoming_seconds << " " << "=" << " "
         << days << " " << "days" << "," << " "
         << hours << " " << "hours" << "," << " "
         << minutes << " " << "minutes" << "," << " "
         << seconds << " " << "seconds" << endl;

    return 0;
}