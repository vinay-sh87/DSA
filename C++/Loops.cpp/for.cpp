#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello " << i << endl;
    }
    int n;
    cout << "Enter the number till sum you want.." << endl;
    cin >> n;
    int sum = 0;
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    // example
    int number, s = 0;
    cout << "Enter a number : " << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
        s += i;
    }
    cout << endl;
    cout << "Sum : " << s << endl;

    return 0;
}