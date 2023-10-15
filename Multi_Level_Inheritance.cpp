#include <iostream>
using namespace std;
class First_Class
{
protected:
    int a, c;

private:
    int b;

public:
    int d;
    void Set_Value();
    void Get_Value();
};

void First_Class::Set_Value()
{
    cout << "Enter First Varriable??"
         << endl;
    cin >> a;
    cout << "Enter Second Varriable??"
         << endl;
    cin >> b;
    cout << "Enter Third Varriable??"
         << endl;
    cin >> c;
    cout << "Enter Fourth Varriable??"
         << endl;
    cin >> d;
}

void First_Class::Get_Value()
{
    cout << "This is the First Protected Varriable From First Class " << a << endl;
    cout << "This is the Second Protected Varriable From First Class " << c << endl;
    cout << "This is the Private Varriable From First Class " << b << endl;
    cout << "This is the Public Varriable From First Class " << d << endl;
}

class Second_Class : public First_Class
{
public:
    void Get_Value_2();
};

void Second_Class::Get_Value_2()
{
    cout << "This is the First Protected Varriable From Second Class " << a << endl;
    cout << "This is the Second Protected Varriable From Second Class " << c << endl;
    cout << "This is the Public Varriable From Second Class " << d << endl;
}

class Third_class : public Second_Class
{
public:
    void Get_value_3();
};

void Third_class::Get_value_3()
{
    cout << "This is the First Protected Varriable From Third Class " << a << endl;
    cout << "This is the Second Protected Varriable From Third Class " << c << endl;
    cout << "This is the Public Varriable From Third Class " << d << endl;
}

int main()
{
    Third_class Object_1;
    Object_1.Set_Value();
    Object_1.Get_Value();
    Object_1.Get_Value_2();
    Object_1.Get_value_3();

    return 0;
}