#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                            Public Derivation   Private Derivation  Protected Derivation
1. Private members -->      Not Inherited       Not Inherited       Not Inherited
2. Protected members -->    Protected           Private             Protected
3. Public members -->       Public              Private             Protected
*/
class Derived : protected Base
{
public:
    void showData(void)
    {
        cout << a << endl; // garbage value
    }
};
int main()
{
    Base b;
    Derived d;
    // cout << d.a << endl; // inherited as protected so it will not work
    d.showData();
    return 0;
}