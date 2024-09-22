//* vectors are dynamic arrays
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // declaration
    vector<int> v;     // without size definition
    vector<int> v1(3); // with size definition
    v.push_back(45);
    v.push_back(9);
    // size
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    printVector(v);
    // resize
    v.resize(5);
    // insert
    v.insert(v.begin() + 2, 3); // in the second index
    printVector(v);
    // delete
    v.pop_back();
    v.pop_back();
    printVector(v);
    v.erase(v.end() - 2); // second last element
    printVector(v);

    // looping through vectors
    vector<int> v2;
    cout<<"Enter 5 numbers..."<<endl;
    for(int i = 0;i<5;i++){
        int element;
        cin>>element;
        v2.push_back(element);

    }
    for(int i = 0;i<v2.size();i++){
        cout<<v2[i]<< " ";
    }
    cout<<endl;
    vector<int> v3(3);
    cout<<"Enter three numbers..."<<endl;
    for(int i = 0;i<3;i++){
        cin>>v3[i];
    }
    for(int i = 0;i<v3.size();i++){
        cout<<v3[i]<< " ";
    }
    // for each loop
    for(int elem:v2){
        cout<<elem<<" ";
    }
    cout<<endl;

    v1.clear();
    return 0;
}