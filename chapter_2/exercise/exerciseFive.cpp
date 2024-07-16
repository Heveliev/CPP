// exerciseFive -- program that calculates the percentage of a country's population from the world's

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int Percentage = 100;
    long long world_population, country_population;
    string country_name;

    cout << "Enter the word's population:" << " ";
    cin >> world_population;
    cout << "Enter the name country:" << " ";
    cin >> country_name;
    cout << "Enter the population of the" << " " << country_name << ":" << " ";
    cin >> country_population;

    double percentage_population = double(country_population) / double(world_population) * double(Percentage);

    cout << "The population of the" << " " << country_name << " "
         << "is" << " " << percentage_population << "%" << " "
         << "of the world population.";

    return 0;
}