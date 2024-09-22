#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    int salary;
    public:
    void setData(int id,string b,int c);
    void getData();
};
void Employee::setData(int id,string name,int salary){
    this->id=id; this->name=name;  this->salary=salary;
    
}
void Employee::getData(){
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;
}


int main(){
    Employee Rohan;
    Rohan.setData(12,"Rohan",65622);
    Rohan.getData();
    Employee Kartik;
    Rohan.setData(11,"Kartik",69899);
    Rohan.getData();
    return 0;
}