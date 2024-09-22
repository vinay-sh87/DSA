/*  There are three access specifiers:
    1. private: members can't be accessed outside of the class
    2. public: accessible from outside of the class
    3. protected: same as privae, but accessible from inherited classes
 */
#include <iostream>
using namespace std;

class Dog
{
private:
    string name;

protected:
    string color;

public:
    void bark()
    {
        cout << "Woof Woof..!" << endl;
    }
};
int main()
{
    Dog d;
    d.bark();
    return 0;
}