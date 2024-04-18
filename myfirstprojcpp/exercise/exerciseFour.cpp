// exerciseFour.cpp -- programme for the transfer of age into the months

#include <iostream>

using namespace std;

int ageInMonths(int);

int main()
{
    int age;

    cout << "Enter your age:" << " ";
    cin >> age;
    cout << "Your age in months is"
    << " "
    << ageInMonths(age) << "."
    << endl;
    return 0;
}

int ageInMonths(int age)
{
    return age * 12;
}