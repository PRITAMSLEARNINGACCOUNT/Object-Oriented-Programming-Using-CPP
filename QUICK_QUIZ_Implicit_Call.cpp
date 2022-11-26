#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    int a, b;

public:
    Point(int x, int y);
    friend int calculation(Point o1, Point o2);
};

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

int calculation(Point o1, Point o2)

{
    int a = sqrt(((o2.a - o1.a) * (o2.a - o1.a)) + ((o2.b - o1.b) * (o2.b - o1.b)));
    return a;
}

int main()
{
    int a, b; // Horizontal distance
    int x, y; // Vertical Distance
    cout << "Give Horizontal Distance" << endl;
    cin >> a; // x1
    cin >> b; // y1
    cout << "Give Vertical Distance" << endl;
    cin >> x; // x2
    cin >> y; // y2
    Point horizontal_distance(a, b);//Implicit Call
    Point Vertical_distance(x, y);//Implicit Call
    cout << "So the Distance between two point is " << calculation(horizontal_distance, Vertical_distance);
    return 0;
}