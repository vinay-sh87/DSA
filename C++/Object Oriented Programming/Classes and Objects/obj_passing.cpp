#include<iostream>
using namespace std;


class Complex{
    int a,b;
public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1,Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        
    }
    void printNumber(void){
        cout<<"Your complex number is "<<a<<"+i"<<b<<endl;
    }

};
int main(){
    Complex c1,c2,c3; // objects c1,c2,c3
    c1.setData(1,2); 
    c1.printNumber();
    
    c2.setData(3,4);
    c2.printNumber();
    // add two complex objects and store into third one 
    c3.setDataBySum(c1,c2); // sum of two complex number / objects of complex class
    c3.printNumber();

    return 0;
}