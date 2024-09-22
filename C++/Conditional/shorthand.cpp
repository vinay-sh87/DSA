#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter the present time..." << endl;
    cin >> time;
    string result = (time < 12) ? "Good Morning!" : "Good Evening!";
    cout << result << endl;
    return 0;
}