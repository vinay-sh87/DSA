#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
    if (num2 > num1)
    {
        cout << num2 << " is greater than " << num1 << endl;
    }

    int salary, serviceYear;
    cout << "Enter your salary and year of service??" << endl;
    cin >> salary >> serviceYear;
    if (serviceYear >= 5)
    {
        int bonus = (salary/100)*5;
        cout<<"Your net salary = "<<(bonus+salary)<<endl;
    }

    return 0;
}