#include <iostream>
using namespace std;

int main()
{
    string car = "Lambhorghini";
    string model = "Urus";
    string carName = car + model;
    cout << carName << endl;
    // string concatenation
    string firstName = "Rohit";
    string lastName = "Sharma";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
    string name = firstName.append(lastName);
    cout << name << endl;
    string a = "6";
    string b = "7";
    string c = a + b;
    cout << c << endl;
    string text = "abcdefghijklmnopqrstuvwxyz";
    cout << text.length() << endl;
    cout << text.size() << endl;

    // Access
    string t = "Hellow...";
    t[0] = 'Y';
    cout << t << endl;
    cout << t[2] << endl;
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;

    // User Input 
    string st;
    cout<<"Input your string here..."<<endl;
    cin>>st; // will get only the first word
    cout<<"You entered : "<<st<<endl;
    cout<<"Input your string here..."<<endl;
    getline(cin,st); // whole sentence
    cout<<"You entered : "<<st<<endl;

    return 0;
}