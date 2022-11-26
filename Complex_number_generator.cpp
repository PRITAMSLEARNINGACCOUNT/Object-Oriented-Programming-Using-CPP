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
    int an;
    cout << "Give how much complex number you want to generate" << endl;
    cin >> an;
    complex_number_generator a[100], b[100], c[100];
    for (int i = 0; i < an; i++)
    {
        cout << "This is the First two numbers" << endl;
        a[i].num1_initialization();
        a[i].num2_initialization();
        cout << "This is the Second two numbers" << endl;
        b[i].num1_initialization();
        b[i].num2_initialization();
    }
    for (int j = 0; j < an; j++)
    {
        c[j].generation(a[j], b[j]);
        c[j].complexnumber();
    }

    return 0;
}