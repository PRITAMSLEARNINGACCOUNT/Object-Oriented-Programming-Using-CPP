#include <iostream>
using namespace std;
class Base_Class_1
{
protected:
    int var_1, var_2;

public:
    Base_Class_1(int Temp_1, int Temp_2);
};

Base_Class_1::Base_Class_1(int Temp_1, int Temp_2)
{
    var_1 = Temp_1;
    var_2 = Temp_2;
}
class Derived_Class_1 : virtual protected Base_Class_1
{
private:
    int number_1, number_2;

public:
    Derived_Class_1(int Varriable_1, int Varriable_2, int num1, int num2) : Base_Class_1(Varriable_1, Varriable_2)
    {
        number_1 = num1;
        number_2 = num2;
    }
};
class Derived_Class_2 : protected Derived_Class_1
{
private:
    int Varriable;

public:
    Derived_Class_2(int varr_1, int varr_2, int varr_3, int varr_4, int last) : Derived_Class_1(varr_1, varr_2, varr_3, varr_4), Base_Class_1(varr_1, varr_2)
    {
        Varriable = last;
    }
};

int main()
{
    Derived_Class_2 Object_1(20, 50, 60, 90, 0);

    return 0;
}