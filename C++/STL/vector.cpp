#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(9);
    v.emplace_back(3); // similar but faster

    vector<pair<int, int>> vect;
    vect.push_back({4, 5});
    vect.emplace_back(5, 7); // without {} braces

    vector<int> vec(4, 100); // {100,100,100,100}
    vector<int> v1(6);
    vector<int> v2(9, 5); // {5,5,5,5,5,5,5,5,5}
    vector<int> v3(v2);

    // accessing vectors
    cout << v[0] << endl;
    cout << v[1] << v.at(2) << endl;
    cout << v.back() << endl;
    // usign iterator
    vector<int>::iterator it = v.begin(); // address of the first element
    it++;
    cout << *(it) << " "; // second element
    it += 2;
    cout << *(it) << " "; // fourth element

    vector<int>::iterator itr = vec.end(); // address after the last element
    itr--;                                 // last element
    cout << *(itr) << " ";
    // vector<int>::iterator itr2 = vec.rbegin(); // address of the last element
    // cout << *itr2 << endl;
    // itr2++; // (last - 1) element
    // cout << *itr2 << endl;

    cout << endl
         << "Printing through loop..." << endl;
    for (vector<int>::iterator itr3 = v.begin(); itr3 != v.end(); itr3++)
    {
        cout << *(itr3) << " ";
    }
    // shortcut
    for (auto itr3 = v.begin(); itr3 != v.end(); itr3++)
    {
        cout << *(itr3) << " ";
    }
    auto subject = "Physics";
    cout << subject << endl;

    // Deletion in a vector
    // v.erase(v.begin()+1); // remove second element
    v.erase(vec.begin() + 1, vec.begin() + 4); // {1,5,8,4,9,3} from 1 to 8
    for (auto itr4 = v.begin(); itr4 != v.end(); itr4++)
    {
        cout << *(itr4) << " ";
    }

    return 0;
}