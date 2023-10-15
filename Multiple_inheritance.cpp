#include <iostream>
using namespace std;
class Base_1
{
protected:
    int a, b;

public:
    void Set_Value()
    {
        cout << "Enter A Value For First Varriable??" << endl;
        cin >> a;
        cout << "Enter A Value For Second Varriable??" << endl;
        cin >> b;
    }
};
class Base_2
{
protected:
    int c;

public:
    void Set_Value_2()
    {
        cout << "Enter A Value For Third Varriable??" << endl;
        cin >> c;
    }
};
class Derived_Class : public Base_1, public Base_2
{
public:
    void Show_Value()
    {
        cout << "So the value of first varriable is " << a << endl;
        cout << "So the value of second varriable is " << b << endl;
        cout << "So the value of third varriable is " << c << endl;
    }
    int Sum()
    {

        return a + b + c;
    }
};
int main()
{
    Derived_Class Object_1;
    Object_1.Set_Value();
    Object_1.Set_Value_2();
    Object_1.Show_Value();
    int Result = Object_1.Sum();
    cout << "So the sum of three numbers given by user is " << Result << endl;

    return 0;
}