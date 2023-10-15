#include <iostream>
#include <cmath>
using namespace std;
class Simple_Calculator
{
protected:
    int a, b;

public:
    void Set_Value_2()
    {
        cout << "Enter First Number??" << endl;
        cin >> a;
        cout << "Enter Second Number??" << endl;
        cin >> b;
    }
    void Arithmatic_Operation_2()
    {
        cout << "So The Addition Of Two Integer Numbers Given By User Is " << a + b << endl;
        cout << "So The Subtraction Of Two Integer Numbers Given By User Is " << a - b << endl;
        cout << "So The Multiplication Of Two Integer Numbers Given By User Is " << a * b << endl;
        cout << "So The Division Of Two Integer Numbers Given By User Is " << (float)a / (float)b << endl;
    }
};
class Scientific_Calculator
{
protected:
    int sqrt_Var;
    float a1, b1;

public:
    void Sqrt_Func();
    void Set_Value()
    {
        cout << "Enter First Number(Floating Point Number)??" << endl;
        cin >> a1;
        cout << "Enter Second Number(Floating Point Number)??" << endl;
        cin >> b1;
    }
    void Arithmatic_Operation()
    {
        cout << "So The Addition Of Two Floating Point Numbers Given By User Is " << a1 + b1 << endl;
        cout << "So The Subtraction Of Two Floating Point Numbers Given By User Is " << a1 - b1 << endl;
        cout << "So The Multiplication Of Two Floating Point Numbers Given By User Is " << a1 * b1 << endl;
        cout << "So The Division Of Two Floating Point Numbers Given By User Is " << a1 / b1 << endl;
    }
};

void Scientific_Calculator::Sqrt_Func()
{
    cout << "Enter A Number To Calculate Square Root." << endl;
    cin >> sqrt_Var;
    cout << "So The Sqare Root Of The Number Given By You Is " << sqrt(sqrt_Var) << endl;
}
class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
};

int main()
{
    Hybrid_Calculator Object_1;
    Object_1.Set_Value_2();
    Object_1.Arithmatic_Operation_2();
    Object_1.Sqrt_Func();
    Object_1.Set_Value();
    Object_1.Arithmatic_Operation();

    return 0;
}