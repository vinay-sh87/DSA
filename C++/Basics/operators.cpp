#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    int b = 5;
    // Arithmetic Operator
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << ++a << endl;
    cout << --b << endl;
    // Assignment Operators
    a = 30;
    a += 5; // a=a+5
    cout << a << endl;
    a -= 6; // a=a-6
    a -= 6; // a=a-6
    cout << a << endl;
    a *= 6; // a=a*6
    cout << a << endl;
    a /= 6; // a=a/6
    cout << a << endl;
    a %= 6; // a=a%6
    // Comparison Operator
    int x = 7;
    int y = 10;
    cout << (x > y) << endl;
    cout << (x < y) << endl;
    cout << (x == y) << endl;
    cout << (x <= y) << endl;
    cout << (x >= y) << endl;
    cout << (x != y) << endl;
    // Logical Operator
    bool first = 1;
    bool second = 0;
    cout << (first && second) << endl; // 1 AND 0 -->0
    cout << (first || second) << endl; // 1 OR 0 -->1
    cout << (!first) << endl;          // not of 1 -->0
    cout << (!second) << endl;         // not of 0 -->1
    // Bitwise Operator
    int bit1 = 8;
    int bit2 = 5;
    cout << (bit1 & bit2) << endl; // Bitwise AND
    cout << (bit1 | bit2) << endl; // Bitwise OR
    cout << (bit1 ^ bit2) << endl; // Bitwise XOR
    cout << (~bit1) << endl;       // Bitwise NOT
    cout << (bit1 << 2) << endl;   // Bitwise Left Shift
    cout << (bit2 >> 2) << endl;   // Bitwise Right Shift

    return 0;
}