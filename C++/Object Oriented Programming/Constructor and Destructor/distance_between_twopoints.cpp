#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    friend int distance(Point, Point);
};
int distance(Point l, Point n)
{
    return sqrt((l.x - n.x) * (l.x - n.x) + (l.y - n.y) * (l.y - n.y));
}
int main()
{
    Point p = Point(1,1); // explicit call
    Point q(1, 1);       // implicit call
    p.displayPoint();
    q.displayPoint();
    int dist = distance(p, q);
    cout << "The distance between these two points is : " << dist << " unit" << endl;

    return 0;
}