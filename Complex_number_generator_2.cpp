#include <iostream>
using namespace std;
class complexnumber
{
private:
    int number1, number2;

public:
    void part1(int, int);

    void genaration(complexnumber object1, complexnumber object2);
    void printcomplexnumber(void);
};
void complexnumber::genaration(complexnumber object1, complexnumber object2)
{
    number1 = object1.number1 + object2.number1;
    number2 = object1.number2 + object2.number2;
}

void complexnumber::part1(int a, int b)
{
    number1 = a;
    number2 = b;
}

void complexnumber::printcomplexnumber(void)
{
    cout << "Your complex number is " << number1 << " + " << number2 << "i" << endl;
}

int main()
{
    int a, b, c;
    complexnumber b1[100], c1[100];
    cout << "Enter how much complex number you want to entry in this programme" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "This is first part that means you have to enter two number" << endl;
        cout << "Enter first number" << endl;
        cin >> b;
        cout << "Enter Second number" << endl;
        cin >> c;
        b1[i].part1(b, c);
    }
    for (int j = 0; j < (a - 1); j++)
    {
        c1[j].genaration(b1[j], b1[j + 1]);
        c1[j].printcomplexnumber();
    }

    return 0;
}