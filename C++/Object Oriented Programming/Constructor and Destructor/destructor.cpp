#include <iostream>
using namespace std;
// destuctor neither takes an argument nor returns any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    // destructor
    ~num()
    {
        cout << "this is destructor " << count << endl;
        count--;
    }
};
int main()
{
    cout << "Inside main" << endl;
    cout << "Creating first obj n1" << endl;
    num n1;
    {
        cout << "creating two more obj inside scope of block" << endl;
        num n2, n3;
        cout << "Exiting this block..." << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}