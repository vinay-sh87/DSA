#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // creating a constructor (should be declared in the public section of the class)
    Complex(void); // automatically invoked whenever an object is created 
    void printData();

};
Complex :: Complex(void){
    a = 0;
    b = 0;
}
void Complex::printData(void){
    cout<<"Your number is : "<<a<<" + "<<b<<"i";
}
int main(){
    Complex c;
    c.printData();
    return 0;
}

// Characteristics of Constructors
/*
1. It should be declared in the public section of the class
2. They are automatically invoked whenever an object is created
3. They can't return values and do not have return type
4. It can have default arguments
5. We can't refer to thier address
*/