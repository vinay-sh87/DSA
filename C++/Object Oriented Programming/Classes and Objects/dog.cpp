#include<iostream>
using namespace std;
// class dog
class Dog{
    // data members 
    string name;
    // access specifier
    public:
    void bark(); // member function
    void run();
};
// definaition of member functions using scope resolution operator ::
void Dog::bark(){
    cout<<"woof, woof..."<<endl;
}
void Dog::run(){
    cout<<"Running..."<<endl;
}
int main(){
    Dog d1; // object creation
    d1.bark(); // function calling
    d1.run();
    return 0;
}