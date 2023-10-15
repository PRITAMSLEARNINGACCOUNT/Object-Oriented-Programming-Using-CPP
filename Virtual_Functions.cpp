#include <iostream>
using namespace std;
class Base_Class
{
protected:
    int a, b;

public:
    Base_Class(int a, int b);
    virtual void Display()
    {
        cout << "So the value of the first varriable declared in base class is " << a << endl;
        cout << "So the value of the second varriable declared in base class is " << b << endl;
    }
};

Base_Class::Base_Class(int a, int b)
{
    this->a = a;
    this->b = b;
}
class Derived_Class : public Base_Class
{
private:
    int num1, num2;

public:
    Derived_Class(int a, int b, int c, int d) : Base_Class(a, b)
    {
        num1 = c;
        num2 = d;
    }
    void Display()
    {
        cout << "So the value of the first varriable declared in derived class is " << num1 << endl;
        cout << "So the value of the second varriable declared in derived class is " << num2 << endl;
    }
};
class Derived_Class_2 : public Base_Class
{
private:
    int ab, cd;

public:
    Derived_Class_2(int num1, int num2, int num3, int num4) : Base_Class(num1, num2)
    {
        ab = num3;
        cd = num4;
    }
    void Display()
    {
        cout << "So the value of the first varriable declared in derived class 2 is " << ab << endl;
        cout << "So the value of the second varriable declared in derived class 2 is " << cd << endl;
    }
};

int main()
{

    Derived_Class Object(4, 5, 6, 7);
    Base_Class *pointer[2];
    Derived_Class_2 Object_2(65, 54, 88, 9);
    Base_Class Object_Base(9, 8);
    Base_Class *Pointer_Object = &Object_Base;
    pointer[1] = &Object_2;
    pointer[0] = &Object;
    pointer[0]->Display();
    pointer[1]->Display();
    Pointer_Object->Display();

    return 0;
}