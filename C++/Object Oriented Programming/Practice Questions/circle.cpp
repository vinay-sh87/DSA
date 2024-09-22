#include <iostream>
using namespace std;
class Circle
{
    int radius;
    const float pi = 3.14f;

public:
    Circle(double r)
    {
        radius = r;
    }
    void area(void);
    void circumference(void);
};
void Circle::area(void)
{
    cout << "Area of circle = " << pi * radius * radius<<endl;
}
void Circle::circumference(void)
{
    cout << "Circumference of circle = " << 2 * pi * radius<<endl;
}

int main()
{
    Circle c(4);
    c.area();
    c.circumference();
    return 0;
}