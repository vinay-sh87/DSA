#include <iostream>
using namespace std;

// Forward Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumImagComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // indivisually declaring friend functions
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumImagComplex(Complex o1,Complex o2);

    // declaring entire class as friend 
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// definition
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator::sumImagComplex(Complex o1, Complex o2){
    return o1.b + o2.b;
}
int main()
{
    Complex o1, o2;
    o1.setNumber(2, 45);
    o2.setNumber(45, 3);
    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << real << endl;
    int imag = calc.sumImagComplex(o1,o2);
    cout<<"The sum of imaginary part of o1 and o2 is "<<imag<<endl;
    
    cout<<"The sum of o1 and o2 is "<<real << " + "<<imag<<"i"<<endl;
}
