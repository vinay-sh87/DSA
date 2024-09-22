#include <iostream>
using namespace std;

int sum(int n)
{
    if (n > 0)
    {
        return n + (sum(n - 1));
    }
    else
    {
        return 0;
    }
}
int fact(int f)
{
    if (f > 0)
    {
        return f * fact(f - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "Sum : " << sum(num) << endl;
    cout << "Factorial: " << fact(num) << endl;
    return 0;
}