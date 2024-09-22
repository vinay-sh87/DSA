#include<iostream>
using namespace std;

class Bank{
    int balance;
    long int account_number;
    string name;
    public:
        void setData(void);
        void deposit(int);
        void withdraw(int);

};
void Bank::setData(void){
    cout<<"Enter the Name of Customer : "<<endl; 
    getline(cin,name);  
    cout << "Enter Account Number : "<<endl;
    cin >>account_number ;
    cout<<"Enter Your Balance"<<endl;
    cin>>balance;
}
void Bank::deposit(int amount){
    balance +=amount;
    cout<<"Done"<<endl;
}
void Bank::withdraw(int amount){
    if(amount<=balance){
        cout<<"\nYou have Withdrawed Rs."<<amount<<" from your bank account.\n";
        balance = balance - amount;
        cout<<"\nYour new balance is Rs. "<<balance<<".\n" ;
    }
    else{
        cout<<"Insufficient Funds"<<endl;
    }

}
int main(){
    Bank p1;
    p1.setData();
    p1.deposit(1200);
    p1.withdraw(1500);
    
    return 0;
}