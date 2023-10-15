#include <iostream>
using namespace std;
class Base_1
{
private:
    int var_1, var_2;

public:
    Base_1(int a, int b);
    void Display_1(void)
    {
        cout << "The Value Of First Varriable From First Base Class Is " << var_1 << endl;
        cout << "The Value Of Second Varriable From First Base Class Is " << var_2 << endl;
    }
};

Base_1::Base_1(int a, int b)
{
    var_1 = a;
    var_2 = b;
    cout << "The Constructor From First Base Class Is Called" << endl;
}
class Base_2
{
protected:
    int a, b;

public:
    Base_2(int Temp_1, int Temp_2);
    void Display_2(void)
    {
        cout << "The Value Of First Varriable From Second Base Class Is " << a << endl;
        cout << "The Value Of Second Varriable From Second Base Class Is " << b << endl;
    }
};

Base_2::Base_2(int Temp_1, int Temp_2)
{
    a = Temp_1;
    b = Temp_2;
    cout << "The Constructor From Second Base Class Is Called" << endl;
}

class Inherited_class : public Base_1, virtual public Base_2
{
private:
    int Inherited_Varriable;

public:
    Inherited_class(int Func, int temp_var_1, int temp_var_2, int temp_var_3, int Temp_var_4) : Base_1(Func, temp_var_1), Base_2(temp_var_2, temp_var_3)
    {
        Inherited_Varriable = Temp_var_4;
        cout << "The Constructor From Inherited Class Is Called" << endl;
    }
    void Display_3(void)
    {
        cout << "The Value Of The Varriable Declared In Inherited Class Is " << Inherited_Varriable << endl;
    }
};

int main()
{
    Inherited_class Object_1(12, 54, 50, 88, 90);
    Object_1.Display_1();
    Object_1.Display_2();
    Object_1.Display_3();
    return 0;
}