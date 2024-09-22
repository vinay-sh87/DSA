#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
public:
    void setId(void){
        salary = 5000;
        cout<<"Enter id of employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    // Employee Rohan,Kartik,Shruti,Keshav;
    // Rohan.setId();
    // Rohan.getId();
    Employee fb[4]; // array of objects
    for(int i = 0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}