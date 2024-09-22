#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // copy constructor (when no copy constructor is found, compiler supplies its own copy constructor)
    Number(Number &obj)
    {
        cout << "\nCopy Constructor called " << endl;
        a = obj.a;
    }
    void display(void)
    {
        cout << "The number of this obj is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z); // obj passing
    z1.display();

    return 0;
}