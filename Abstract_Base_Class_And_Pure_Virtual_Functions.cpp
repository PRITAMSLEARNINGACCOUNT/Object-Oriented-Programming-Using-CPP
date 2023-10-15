#include <iostream>
using namespace std;
class Base_Class //Example Of Abstract Base Class
{
public:
    virtual void Func() = 0;//Example Of Pure Virtual Function
};
class Derived : public Base_Class
{
private:
    int a = 10;

public:
    void Func()
    {
        cout << "The Value Of The Varriable Declared In This Class Is " << a << endl;
    }
};
class Derived_2 : public Base_Class
{
private:
    int b = 11;

public:
    void Func()
    {
        cout << "This Is The Function From Second Derived Class";
        cout << " And The Value Of The Varriable Declared In This Class Is " << b << endl;
    }
};

int main()
{
    Base_Class *Base_Pointer,*Base_Pointer_2;
    Derived Object;
    Derived_2 Object_2;
    Base_Pointer = &Object;
    Base_Pointer_2=&Object_2;
    Base_Pointer->Func();
    Base_Pointer_2->Func();


    return 0;
}