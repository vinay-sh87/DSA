#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    float price = 55.99f;
    double value = 99.98;
    char sign = '@';
    string name = "John Hammand";
    bool canAccess = false;

    cout << age << ", Size = " << sizeof(age) << " Bytes" << endl;
    cout << price << ", Size = " << sizeof(price) << " Bytes" << endl;
    cout << value << ", Size = " << sizeof(value) << " Bytes" << endl;
    cout << canAccess << ", Size = " << sizeof(canAccess) << " Bytes" << endl;
    cout << sign << ", Size = " << sizeof(sign) << " Bytes" << endl;
    cout << name << ", Size = " << sizeof(name) << " Bytes" << endl;

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!";
    }
    else
    {
        cout << "Not old enough to vote.";
    }

    return 0;
}