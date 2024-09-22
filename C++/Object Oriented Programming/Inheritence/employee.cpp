#include <iostream>
using namespace std;

// base class
class Employee
{
    float salary;

public:
    int id;
    Employee() {}
    Employee(int impId)
    {
        id = impId;
        salary = 10000;
    }
};
// derived class
class Programmer : private Employee
{ // defualt visibility mode is private
    string name;
    string language;

public:
    Programmer(int impId)
    {
        id = impId;
    }
    void showData(void)
    {
        cout << name <<" knows : " << language << endl;
        // cout<<salary<<endl; // private members of the base class will not be accessed
    }
    void setData(string name,string language)
    {
        this->name=name;
        this->language = language;
    }
};
int main()
{
    Employee Kartik(1), Rohan(2);
    cout << Kartik.id << endl;
    cout << Rohan.id << endl;
    Programmer Keshav(3);
    Keshav.setData("Keshav","Python");
    Keshav.showData();

    return 0;
}