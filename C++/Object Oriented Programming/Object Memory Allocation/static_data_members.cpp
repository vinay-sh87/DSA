#include<iostream>
using namespace std;

class Employee{

    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        };
        void getData(void){
            cout<<"id "<<id<<endl;
            cout<<"Count "<<count<<endl;
        };
};
int Employee::count = 1000; // default value is 0

int main(){
    Employee mohan,kartik;
    mohan.setData();
    mohan.getData();

    kartik.setData();
    kartik.getData();

    
    return 0;
}