#include <iostream>
using namespace std;
class Base_1
{
public:
    void Func();
};

void Base_1::Func()
{
    cout << "This is a function from first base class" << endl;
}
class Base_2
{

public:
    void Func();
};

void Base_2::Func()
{
    cout << "This is a function from second base class" << endl;
}
class Inherited_Class : public Base_1, public Base_2
{

public:
    void Func();
};

void Inherited_Class::Func()
{
    Base_1::Func();
}

int main()
{
    Inherited_Class Object_1;
    Object_1.Func();

    return 0;
}