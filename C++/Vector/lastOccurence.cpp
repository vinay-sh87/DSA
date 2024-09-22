#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(7);
    cout << "Enter nuumbers " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int x;
    cout << "Enter the number " << endl;
    cin >> x;
    int occur = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occur = i;
        }
    }
    cout << "Last element was found at index " << occur << endl;
    int lastOccur = -1;
    for (int i = v.size() - 1; i > 0; i--)
    {
        if (v[i] == x)
        {
            lastOccur = i;
        }
    }
    cout << "Last element was found at index " << v.size() - lastOccur << endl;
    return 0;
}