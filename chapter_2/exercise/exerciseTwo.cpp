// exerciseTwo -- program for calculation of body mass index

#include <iostream>

using namespace std;

int main()
{
    const int Inches_per_feet = 12;
    const double Meter_coefficient = 0.0254;
    const double Kg_coefficient = 2.2;

    int height_feet, height_inches, weight_pounds;
    cout << "Enter your height\n";
    cout << "Feet:" << " ";
    cin >> height_feet;
    cout << "Inches:" << " ";
    cin >> height_inches;
    cout << "Enter your weight in pounds:" << " ";
    cin >> weight_pounds;

    int height_in_inches = height_feet * Inches_per_feet + height_inches;
    double height_in_meters = double (height_in_inches) * Meter_coefficient;
    double weight_in_kg = weight_pounds / Kg_coefficient;

    double bmi = weight_in_kg / (height_in_meters * height_in_meters);
    cout << "Your body mass index =" << " " << bmi;

    return 0;
}