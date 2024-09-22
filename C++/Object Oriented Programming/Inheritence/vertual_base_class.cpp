#include<iostream>
using namespace std;
/*
                    <-------------Student-------------->            // student as virtual base class 
                    Test                                Sports
                    -------------->Result<--------------- 
*/
class Student{
    protected:
        int roll_no;
    public:
        void setNumber(int a){
            roll_no=a;
        }
        void printNumber(void){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};
class Test:virtual public Student{
    protected:
        float maths,physics;
        public:
            void setMarks(float m1, float m2){
                maths =m1 ;
                physics=m2;
            }
            void printMarks(void){
                cout<<"Your Result is here: "<<
                "\nMaths Mark : " <<maths<<
                "\nPhysics Mark :" <<physics<< endl;
            }

};
class Sports:virtual public Student{
    protected:
        float score;
        public:
            void setScore(float sc){
                score=sc;
            }
            void printScore(void){
                cout<<"Your PT score is "<<score<<endl;
            }

};
class Result: public Test,public Sports{ // result will get only one copy of roll_number;
    private:
        float total;
        public:
            void display(void){
                total = maths + physics + score;
                printNumber();
                printMarks();
                printScore();
                cout<<"Your total score is : "<<total<<endl;
            }

};
int main(){
    Result Rahul;
    Rahul.setNumber(12);
    Rahul.setMarks(89,99);
    Rahul.setScore(54);
    Rahul.display();


    return 0;
}