#include <iostream>
using namespace std;
class complex_number_generator
{
private:
    int num1, num2;

public:
    void num1_initialization(void);
    void num2_initialization(void);
    void complexnumber(void);
    void generation(complex_number_generator, complex_number_generator);
};

void complex_number_generator::generation(complex_number_generator a1, complex_number_generator a2)
{
    num1 = a1.num1 + a2.num1;
    num2 = a1.num2 + a2.num2;
}
void complex_number_generator::num1_initialization(void)
{
    cout << "Give first number" << endl;
    cin >> num1;
}

void complex_number_generator::num2_initialization(void)
{
    cout << "Give Second number" << endl;
    cin >> num2;
}
void complex_number_generator::complexnumber(void)
{
    cout << "Your complex number is " << num1 << " + " << num2 << "i" << endl;
}

int main()
{
    complex_number_generator a, b, c;
    cout << "This is the First two numbers" << endl;
    a.num1_initialization();
    a.num2_initialization();
    cout << "This is the Second two numbers" << endl;
    b.num1_initialization();
    b.num2_initialization();
    c.generation(a,b);
    c.complexnumber();
    return 0;
}