// exerciseTwo -- program for converting furlongs to yards and meters
#include <iostream>

using namespace std;

double furlongsToYards(double);
double furlongsToMeter(double);

int main()
{
    double furlongs;

    cout << "Enter value in furlongs:" << " ";
    cin >> furlongs;
    cout << furlongs << " " << "furlongs =" << " ";
    cout << furlongsToYards(furlongs)
    << " "
    << "yards"
    << " "
    << "and"
    << " "
    << furlongsToMeter(furlongs)
    << " "
    << "meters."
    << endl;
    return 0;
}

double furlongsToYards(double furl)
{
    return furl * 220;
}

double furlongsToMeter(double furl)
{
    return furl * 201168;
}