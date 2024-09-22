#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    string s;
    void chk_bin(void); // private
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nInvalid binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin(); // nesting of functions
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display()
{
    cout << "Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // eroor because it is private and only can be accessed by the class member functions
    b.display();
    b.ones_compliment();
    cout<<"After ones compliment"<<endl;
    b.display();

    return 0;
}