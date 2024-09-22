#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void getInput(void);
    void showData(void);
};
void Person::getInput(void)
{
    cout << "Enter Your Name" << endl;
    getline(cin,name);
    cout << "Enter Your age" << endl;
    cin >> age;
}
void Person::showData(void)
{
    cout << "Your Name is " << name << endl;
    cout << "Your age is " << age << endl;
}
int main()
{
    Person p1;
    p1.getInput();
    p1.showData();

    return 0;
}