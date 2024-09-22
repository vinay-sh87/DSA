#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1(void)
{
    return data1;
}
int Base::getData2(void)
{
    return data2;
}
class Derived : private Base
{ // private derivation of class
    int data3;

public:
    void process();
    void display();
};
void Derived::process(void)
{
    setData();
    data3 = 5 * getData1() + 7 * data2;
}
void Derived::display(void)
{
    cout << "Value of Data1 in base class : " << getData1() << endl;
    cout << "Value of Data2 in derived class : " << data2 << endl;
    cout << "Value of Data3 in derived class : " << data3 << endl;
}
int main()
{
    Derived d;
    // d.setData();
    d.process();
    d.display();

    return 0;
}