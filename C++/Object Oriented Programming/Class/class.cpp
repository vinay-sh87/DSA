#include <iostream>
using namespace std;

class Student // class
{
public:
    int age;
    string name;
};
int main()
{
    Student st1;                  // obj
    Student *st2 = new Student(); // using new keyword
    st2->name = "Aaksh";
    cout << st2->name << endl;
    delete st2;
    cout << st2->name << endl; // garbage value

    return 0;
}