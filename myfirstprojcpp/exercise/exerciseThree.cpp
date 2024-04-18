// exerciseThree.cpp -- program to output two messages
#include <iostream>

using namespace std;

void firstMessage();
void secondMessage();

int main()
{
    firstMessage();
    firstMessage();
    secondMessage();
    secondMessage();
    return 0;
}

void firstMessage()
{
    cout << "Three blind mice" << endl;
}

void secondMessage()
{
    cout << "See how they run" << endl;
}