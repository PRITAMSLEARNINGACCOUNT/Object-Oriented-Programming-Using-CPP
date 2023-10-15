#include <iostream>
using namespace std;
class Base_Class_1
{
private:
    int a, b;

public:
    Base_Class_1(int i, int j);
    void Show()
    {
        cout << "So The Value Of The First Varriable From Base Class 1 Is " << a << endl;
        cout << "So The Value Of The Second Varriable From Base Class 1 Is " << b << endl;
    }
};

Base_Class_1::Base_Class_1(int i, int j)
{
    a = i;
    b = j;
    cout << "The Constructor From Base Class 1 Has Been Called" << endl;
}
class Base_Class_2
{
private:
    int c, d;

public:
    Base_Class_2(int temp_1, int temp_2);
    void Show_2()
    {
        cout << "So The Value Of The First Varriable From Base Class 2 Is " << c << endl;
        cout << "So The Value Of The Second Varriable From Base Class 2 Is " << d << endl;
    }
};

Base_Class_2::Base_Class_2(int temp_1, int temp_2)
{
    c = temp_1;
    d = temp_2;
    cout << "The Constructor From Base Class 2 Has Been Called" << endl;
}
class Derived_Class : public Base_Class_1, public Base_Class_2
{
private:
    int Varriable;

public:
    Derived_Class(int var_1, int var_2, int var_3, int var_4, int derived) : Base_Class_2(var_3, var_4), Base_Class_1(var_1, var_2)
    {
        Varriable = derived;
        cout << "The Constructor From Derived Class Has Been Called" << endl;
    }
    void Show_3()
    {
        cout << "So The Value Of The Derived Varriable Is " << Varriable << endl;
    }
};

int main()
{
    Derived_Class Object_1(40, 5, 6, 78, 90);
    Object_1.Show();
    Object_1.Show_2();
    Object_1.Show_3();

    return 0;
}