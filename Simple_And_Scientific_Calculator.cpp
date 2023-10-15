#include <iostream>
#include <cmath>
using namespace std;
class Simple_Calculator
{
protected:
    int a, b;

public:
    Simple_Calculator();
    void Display(void);
};

Simple_Calculator::Simple_Calculator()
{
    cout << "This Is A Simple Calculator" << endl;
    cout << "Enter First Value??" << endl;
    cin >> a;
    cout << "Enter Second Value??" << endl;
    cin >> b;
}
void Simple_Calculator::Display(void)
{
    cout << "Here Are Some Arithmetic Operations Based On The Given Value" << endl;
    cout << "The Sum Of Two Value Is " << a + b << endl;
    cout << "The Subtraction Of Two Value Is " << a - b << endl;
    cout << "The Multiplication Of Two Value Is " << a * b << endl;
    cout << "The Division Of Two Value Is " << (float)a / b << endl;
}
class Scientific_Calculator
{
protected:
    int var_1, var_2;

public:
    Scientific_Calculator();
    void Display_Values(void)
    {
        cout << "Here Are Some Scientific Operations Based On The Given Value" << endl;
        cout << "The Value Of Sin(First_Value) & Sin(Second_Value) Are" << sin(var_1) << sin(var_2) << endl;
        cout << "The Value Of Cos(First_Value) & Cos(Second_Value) Are" << cos(var_1) << cos(var_2) << endl;
        cout << "The Value Of Tan(First_Value) & Tan(Second_Value) Are" << tan(var_1) << tan(var_2) << endl;
        cout << "The Value Of Square_Root(First_Value) & Sqare_Root(Second_Value) Are" << sqrt(var_1) << sqrt(var_2) << endl;
    }
};

Scientific_Calculator::Scientific_Calculator()
{
    cout << "This Is A Scientific Calculator" << endl;
    cout << "Enter The Value Of First Varriable??" << endl;
    cin >> var_1;
    cout << "Enter The Value Of Second Varriable??" << endl;
    cin >> var_2;
}
class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
};

int main()
{
    Hybrid_Calculator Object;
    Object.Display();
    Object.Display_Values();

    return 0;
}