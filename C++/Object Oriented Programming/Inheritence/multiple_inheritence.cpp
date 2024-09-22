#include <iostream>
using namespace std;

// class derived : visibililty_mode base1,visibility_mode base2
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1 , public Base2{ // derived from base1 and base2 in public visibility mode
    public:
        void show(void){
            cout<<"The value of base1 is "<<base1int<<endl;
            cout<<"The value of base2 is "<<base2int<<endl;
            cout<<"The sum of these values is "<<base1int+base2int<<endl;
            
        }
};
int main()
{
    Derived obj;
    obj.set_base1int(34);
    obj.set_base2int(456);
    obj.show();

    return 0;
}