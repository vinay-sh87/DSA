#include<iostream>
using namespace std;

class Y; // forward declaration

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        friend void add(X,Y);


};
class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
        friend void add(X,Y);

};

void add(X o1, Y o2){
    cout<<"Sum of data of object of X and Y = "<<(o1.data) + (o2.num);
}

int main9(){
    X a;
    Y b;
    a.setValue(4);
    b.setValue(6);
    add(a,b);
    return 0;
}