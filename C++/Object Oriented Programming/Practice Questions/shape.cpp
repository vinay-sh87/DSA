#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
public:
    virtual double calculate_area() const = 0; // pure virtual functions
    virtual double calculate_parimeter() const = 0;
};
class Circle : public Shape
{
    double rad;

public:
    Circle(double r)
    {
        rad = r;
    }
    double calculate_area() const override
    {
        return 3.14 * rad * rad;
    }
    double calculate_parimeter() const override
    {
        return (2 * (3.14) * rad);
    }
};
class Square : public Shape
{
    double d;

public:
    Square(double dim)
    {
        d = dim;
    }
    double calculate_area() const override
    {
        return d * d;
    }
    double calculate_parimeter() const override
    {
        return (4 * d);
    }
};
class Rectangle : public Shape
{
    double len;
    double width;

public:
    Rectangle(double l, double w)
    {
        len = l;
        width = w;
    }
    double calculate_area() const override
    {
        return len * width;
    }
    double calculate_parimeter() const override
    {
        return 2 * (len + width);
    }
};
class Triangle : public Shape
{
    double s1;
    double s2;
    double s3;

public:
    Triangle(double s1, double s2, double s3)
    {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }
    double calculate_area() const override
    {
        double s = s1 + s2 + s3;
        return sqrt((s - s1) * (s - s2) * (s - s3));
    }
    double calculate_parimeter() const override
    {
        return s1 + s2 + s3;
    }
};
int main()
{
    Rectangle r(4, 5);
    cout << "Area of Rectangle " << r.calculate_area() << endl;
    cout << "Parimeter of Rectangle " << r.calculate_parimeter() << endl;
    Circle c(5);
    cout << "Area of Circle " << c.calculate_area() << endl;
    cout << "Area of Circle " << c.calculate_parimeter() << endl;
    Triangle t(3, 4, 5);
    cout << "Area of triangle " << t.calculate_area() << endl;
    cout << "Area of triangle " << t.calculate_parimeter() << endl;
    Square s(4);
    cout << "Area of Square " << s.calculate_area() << endl;
    cout << "Area of Square " << s.calculate_parimeter() << endl;

    return 0;
}