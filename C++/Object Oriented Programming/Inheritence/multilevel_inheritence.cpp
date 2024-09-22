#include <iostream>
using namespace std;
// Student
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}
// Exam
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::getMarks(void)
{
    cout << "The marks obtained in Maths is " << maths << endl;
    cout << "The marks obtained in Physics is " << physics << endl;
}
// Result
class Result : public Exam
{
    float percentage;

public:
    void display(void);
};
void Result::display(void)
{
    get_roll_number();
    getMarks();
    cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
}
// A--->B--->C = Inheritence path
int main()
{
    Result Ramu;
    Ramu.set_roll_number(420);
    Ramu.setMarks(90.40, 89.58);
    Ramu.display();

    return 0;
}