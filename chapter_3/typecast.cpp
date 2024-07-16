// typecast.cpp -- forced type change
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99; // C
    coots = int (19.99) + int (11.99); // C++
    cout << "auks =" << " " << auks << "," << " "
         << "bats =" << " " << bats << "," << " "
         << "coots =" << " " << coots << endl;

    char ch = 'W';
    cout << "The code for" << " " << ch << " " << "is" << " ";
    cout << int(ch) << endl;
    cout << "Yes, the code is" << " ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}