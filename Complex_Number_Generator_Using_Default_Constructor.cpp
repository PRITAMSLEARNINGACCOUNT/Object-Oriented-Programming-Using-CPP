#include <iostream>
using namespace std;
class Constructor
{
private:
    int a, b;

public:
    friend int Generation_of_complex_number_1(Constructor object_1, Constructor object_2);
    friend int Generation_of_complex_number_2(Constructor object_1, Constructor object_2);
    Constructor(void);
};

Constructor::Constructor(void)
{
    cout << "Enter The First Number" << endl;
    cin >> a;
    cout << "Enter The Second Number" << endl;
    cin >> b;
}

int Generation_of_complex_number_1(Constructor object_1, Constructor object_2)
{
    int temp_object;
    temp_object = object_1.a + object_2.a;

    return temp_object;
}
int Generation_of_complex_number_2(Constructor object_1, Constructor object_2)
{
    int temp_object;

    temp_object = object_1.b + object_2.b;
    return temp_object;
}

int main()
{
    int a, b;
    Constructor object_1, object_2;
    a = Generation_of_complex_number_1(object_1, object_2);
    b = Generation_of_complex_number_2(object_1, object_2);
    cout << "So the Complex Number is " << a << " And " << b << "i" << endl;

    return 0;
}