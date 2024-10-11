// address.cpp -- using operation & for finding address

#include <iostream>

int main()
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value =" << " " << donuts;
    cout << " " << "and donuts address =" << " " << &donuts << endl;
    // unsigned(&donuts)
    cout << "cups value =" << " " << cups;
    cout << " " << "and cups address =" << " " << &cups << endl;
    // unsigned(&cups)

    return 0;
}