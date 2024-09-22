/*  Constructor are of three types:
    1. Default Constructor
    2. Parameterized Constructor
    3. Copy Constructor
*/
#include <iostream>
using namespace std;

class Square
{
private:
    int side;
    int width;

public:
    Square(void);
    Square(int side);
    Square(const Square &s);
    ~Square(void);
};
// Constructor
Square::Square(void)
{ // Default Constructor
    cout << "Square created..." << endl;
}
Square::Square(int side)
{ // Parameterized Constructor
    cout << "Square area : " << side * side << endl;
}
Square::Square(const Square &sq2) // Copy Constructor
{
    cout << "Copy Constructor called" << endl;
}
// Destructor
Square::~Square(void){
    cout<<"Object is being destroyed"<<endl;
}
int main()
{
    Square sq;
    Square sq1(7);
    Square sq2(sq1);

    return 0;
}