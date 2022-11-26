#include <iostream>
using namespace std;
class calculator; // Forword Declaration
class initialization_of_data
{
private:
    int a, b;
    friend calculator;

public:
    void initialization_num_1(void);
    void initialization_num_2(void);
};

void initialization_of_data::initialization_num_1(void)
{
    cout << "Enter the First Number" << endl;
    cin >> a;
}

void initialization_of_data::initialization_num_2(void)
{
    cout << "Enter the Second Number" << endl;
    cin >> b;
}

class calculator
{
public:
    int add(initialization_of_data);
};
int calculator ::add(initialization_of_data object_1)
{
    return object_1.a + object_1.b;
}
int main()
{
    initialization_of_data object_1;
    calculator sum;
    object_1.initialization_num_1();
    object_1.initialization_num_2();
    cout << "The sum of the given numbers by user is " << sum.add(object_1);

    return 0;
}