#include <iostream>
using namespace std;
class number_2;
class number_1
{
private:
    int a;
    friend void swapnumber(number_1 &o1, number_2 &o2);
    friend void printswapednumber(number_1 o1, number_2 o2);

public:
    int initialization_of_number(int number_1);
};
class number_2
{
private:
    int b;

public:
    friend void swapnumber(number_1 &o1, number_2 &o2);
    friend void printswapednumber(number_1 o1,number_2 o2);
    int initialization_of_number(int number_2);
};

int number_2::initialization_of_number(int number_2)
{
    b = number_2;
}
int number_1::initialization_of_number(int number_1)
{
    a = number_1;
}
void swapnumber(number_1 &o1, number_2 &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
void printswapednumber(number_1 o1, number_2 o2)
{
    cout <<"So the Swaped values are"<< o1.a << " And " << o2.b;
}
int main()
{
    number_1 object_1;
    number_2 object_2;
    int num1, num2;
    cout << "Enter the first Number" << endl;
    cin >> num1;
    cout << "Enter the second Number" << endl;
    cin >> num2;
    object_1.initialization_of_number(num1);
    object_2.initialization_of_number(num2);
    swapnumber(object_1, object_2);
    printswapednumber(object_1,object_2);

    return 0;
}