#include <iostream>
using namespace std;
class base_Class
{
protected:
    int a, b;

public:
    float c, d;
};
class inherited_Class : protected base_Class
{
public:
    void Input()
    {
        cout << "Enter First Number??" << endl;
        cin >> a;
        cout << "Enter Second Number??" << endl;
        cin >> b;
    }
    void Output()
    {
        cout << "So the first number is " << endl;
        cout << a << endl;
        cout << "So the second number is " << endl;
        cout << b << endl;
    }
};
class inherited_class_2 : public base_Class
{

public:
    void input()
    {
        cout << "Enter First Floating Point Number??" << endl;
        cin >> c;
        cout << "Enter Second Floating Point Number??" << endl;
        cin >> d;
    }
    void Output()
    {
        cout << "So the first number Floating Point number is " << endl;
        cout << c << endl;
        cout << "So the second number Floating Point number is " << endl;
        cout << d << endl;
    }
};
int main()
{
    inherited_Class X;
    X.Input();
    X.Output();
    inherited_class_2 Object_1;
    Object_1.input();
    Object_1.Output();

    return 0;
}