#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // friend function declaration
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
// outer normal function not the method of the class
Complex sumComplex(Complex o1, Complex o2) // can access private data of the Complex class
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c1.printNumber();
    c2.setNumber(46, 6);
    c2.printNumber();
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

// Properties of Friend function
/*
1. not in the scope of the class 
2. since it is not in the scope of the class it can not be called from the object of the class.
c1.sumComplex() is invalid 
3. can be invoked without the help of any object 
4. usually contains objects as arguments 
5. can be declared inside public or private section of the class 
6. it can not access the members directly by their names and need (object_name.member_name)        to
access any member 
*/