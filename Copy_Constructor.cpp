#include <cmath>
#include <iostream>
using namespace std;
class Copy_Constructor
{
private:
    int x, y;

public:
    Copy_Constructor(int a, int b);
    Copy_Constructor(Copy_Constructor &object_1, Copy_Constructor &object_2);
};

Copy_Constructor::Copy_Constructor(int a, int b)
{
    x = a;
    y = b;
}

Copy_Constructor::Copy_Constructor(Copy_Constructor &object_1, Copy_Constructor &object_2)
{
    int distance_between_horizontal_point_and_verical_Point;
    int distance_between_horizontal_point_and_verical_Point_2;
    distance_between_horizontal_point_and_verical_Point = pow(object_2.x - object_1.x, 2);
    distance_between_horizontal_point_and_verical_Point_2 = pow(object_2.y - object_1.y, 2);
    cout << "The distance Between Two Points Given By You is " << sqrt(distance_between_horizontal_point_and_verical_Point + distance_between_horizontal_point_and_verical_Point_2) << endl;
}

int main()
{
    int c, d;
    int a, b;
    cout << "Enter Vertical Distance" << endl;
    cin >> a;
    cin >> b;

    cout << "Enter Horizontal Distance" << endl;

    cin >> c;
    cin >> d;
    Copy_Constructor object_1(a, b), object_2(c, d);
    Copy_Constructor(object_1, object_2);

    return 0;
}