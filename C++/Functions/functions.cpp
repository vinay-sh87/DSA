#include <iostream>
using namespace std;
int max(int, int);

void print(string message)
{
    cout << message << endl;
}
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
}
void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
}
void address(int age, string name, string country = "Russia")
{ // default parameter
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Country : " << country << endl;
}
int main()
{
    print("Hey, Guys..."); // call by value
    cout << max(45, 77) << endl;
    int num1, num2;
    cout << "Enter two numbers.." << endl;
    cin >> num1 >> num2;
    cout << "Numbers before swapping:  " << num1 << " " << num2 << endl;
    swap(&num1, &num2); // call by reference
    swap(num1, num2); // call by reference
    cout << "Numbers after swapping:  " << num1 << " " << num2 << endl;

    int age = 25;
    string name = "Ashok";
    address(age, name);

    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}