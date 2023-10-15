#include <iostream>
using namespace std;
class complex2;
class Complex
{
public:
    friend void Generation(Complex, complex2);
    int a, b;
    void integer_initialization(void)
    {
        cout << "First Dimension" << endl;
        cout << "Enter An Integer Value(First Value) " << endl;
        cin >> a;
        cout << "Enter An Integer Value(Second Value) " << endl;
        cin >> b;
    }
};
class complex2 : private Complex
{
public:
    friend void Generation(Complex, complex2);
    void Integer_Initialization(void)
    {
        cout << "Second Dimension" << endl;
        cout << "Enter First Integer" << endl;
        cin >> a;
        cout << "Enter Second Integer" << endl;
        cin >> b;
    }
};

void Generation(Complex Object_1, complex2 Object_2)
{
    cout << "So Your Complex Number Is = ";
    cout << Object_1.a + Object_2.a << " And ";
    cout << Object_1.b + Object_2.b << endl;
}

int main()
{
    Complex o1;
    complex2 o2;
    o1.integer_initialization();
    o2.Integer_Initialization();
    Generation(o1, o2);
    return 0;
}