#include <iostream>
using namespace std;

int main()
{
    cout << "Running";
    int a = 45;
    cout << "a = " << a << endl;
    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Hello, " << name << " Welcome..." << endl;
    cout << endl; // to create a new line
    // escape sequences
    cout << "He'll be okay..." << endl;
    cout << "His Name is \"Karthik\" \n";

    // This is a single line comment
    /*
    Multiline comment
    Use: documentation of the code...
    */
    char grade = 'O';
    float point = 45.77f;
    double distance = 89.88;
    bool isTrue = false;
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "First Number: " << num1 << " Second Number: " << num2 << endl;
    int x, y, z = 8;
    x = y = z;
    cout << x << " " << y << " " << z << endl;
    // identifier : good to use descriptive names in order to understandable code...
    int m = 60;              // Not Good
    int minutesPerHour = 60; // Better

    const double pi = 3.14; // we can't change value
    // pi = 56.7; // error

    return 0;
}