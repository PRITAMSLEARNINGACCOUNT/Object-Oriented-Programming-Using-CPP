#include <iostream>
using namespace std;
class Freind_Function
{
private:
    int a, b;

public:
    friend Freind_Function complexnumber(Freind_Function, Freind_Function);
    void num1intialization(void);
    void num2intialization(void);
    void PrintNumber(void);
};
Freind_Function complexnumber(Freind_Function o1, Freind_Function o2)
{
    Freind_Function object_3;
    object_3.a = o1.a + o2.a;
    object_3.b = o1.b + o2.b;
    return object_3;
}
void Freind_Function::num1intialization(void)
{
    cout << "Enter the first number" << endl;
    cin >> a;
}
void Freind_Function::num2intialization(void)
{
    cout << "Enter the Second number" << endl;
    cin >> b;
}
void Freind_Function::PrintNumber(void)
{
    cout << "So the Complex number is " << a << " + " << b << " i " << endl;
}

int main()
{
    Freind_Function object1, object_2, complex_number;
    object1.num1intialization();
    object1.num2intialization();
    object_2.num1intialization();
    object_2.num2intialization();
    complex_number = complexnumber(object1, object_2);
    complex_number.PrintNumber();
    return 0;
}
