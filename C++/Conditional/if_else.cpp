#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You can vote!"<<endl;
    }
    else{
        cout<<"You are not eligible to vote!"<<endl;
    }
    // example
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num>0){
        cout<<"Absolute number = "<<num<<endl;
    }else{
        cout<<"Absolute number = "<<num*(-1)<<endl;
    }
    return 0;
}