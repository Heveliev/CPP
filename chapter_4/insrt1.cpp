// insrt1 -- reading more than one line

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter you name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious" << " " << dessert;
    cout << " " << "for you" << "," << " " << name << ".\n";

    return 0;
}
