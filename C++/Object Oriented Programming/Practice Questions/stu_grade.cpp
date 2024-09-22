#include<iostream>
using namespace std;

class Student{
    int roll_no;
    int marks;
    string name;
    int class_stu;
    public:
        void getData(void);
        void grades(void);
        void info(void);

};
void Student::getData(void){
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<"Enter your roll number "<<endl;
    cin>>roll_no;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    cout<<"In which class do you study"<<endl;
    cin>>class_stu;
}
void Student::grades(void){
    if((marks>=85) &&(marks<=100)){
        cout<<"Grade : A"<<endl;
    }else if(marks>=70){
        cout<<"Grade : B"<<endl;
    }else if(marks>=60){
        cout<<"Grade : C"<<endl;
    }else if(marks>=40){
        cout<<"Grade : D";
    }else {
        cout<<"Failed"<<endl;
    }  
}
void Student::info(void){
    cout<<"Name : "<<name<<endl;
    cout<<"Roll no. : "<<roll_no<<endl;
    cout<<"Class : "<<class_stu<<endl;
    cout<<"Marks : "<<marks<<endl;
    grades();
}
int main(){
    Student st;
    st.getData();
    st.info();
    
    return 0;
}