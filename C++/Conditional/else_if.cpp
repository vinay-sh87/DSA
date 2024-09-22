#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks..." << endl;
    cin >> marks;
    char grade;
    if (marks >= 80)
    {
        grade = 'A';
    }
    else if (marks >= 60)
    {
        grade = 'B';
    }
    else if (marks >= 50)
    {
        grade = 'C';
    }
    else if (marks >= 45)
    {
        grade = 'D';
    }
    else if (marks >= 25)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    cout<<"Your grade is "<<grade<<endl;
    return 0;
}