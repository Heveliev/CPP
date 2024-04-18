// exerciseSeven -- time display program

#include <iostream>

using namespace std;

void timer(int, int);

int main()
{
    int hours;
    int minutes;

    cout << "Enter the number of hours:" << " ";
    cin >> hours;
    cout << "Enter the number of minutes:" << " ";
    cin >> minutes;
    timer(hours, minutes);
    return 0;
}

void timer(int hour, int minutes)
{
    cout << "Time:"
    << " "
    << hour
    << ":"
    << minutes
    << endl;
}