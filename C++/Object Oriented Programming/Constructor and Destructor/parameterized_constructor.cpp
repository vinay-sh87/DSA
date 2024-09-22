#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(int ,int); 
    void printData(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }

};
Complex :: Complex(int x,int y=0){ // takes two parameters
    a = x;
    b = y;
}
int main(){
    // implicit call
    Complex c(3,46);

    // explicit call
    Complex d=Complex(23);
    c.printData();
    d.printData();
    return 0;
}