// delete.cpp -- using operation "delete"

#include <iostream>
#include <cstring>

using namespace std;

char * getname(void);

int main()
{
    char * name;
    name = getname();
    cout << name << " " << "at" << " " << (int*) name << "\n";
    delete [] name;
    name = getname();
    cout << name << " " << "at" << " " << (int*) name << "\n";
    delete [] name;

    return 0;
}

char * getname()
{
    char temp[80];
    cout << "Enter last name:" << " ";
    cin >> temp;
    char *ps = new char[strlen(temp) + 1];
    strcpy(ps, temp);

    return ps;
}