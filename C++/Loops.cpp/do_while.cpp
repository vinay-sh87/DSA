#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << i << " time" << endl;
        i++;
    } while (i < 2);
    // factorial
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    long long fact = 1;
    int j = 1;
    do
    {
        fact *= j;
        j++;
    } while (j <= n);
    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}