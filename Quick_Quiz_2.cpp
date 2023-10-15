#include <iostream>
#include <cmath>
using namespace std;
class test
{
private:
    int a[100], b[100];

public:
    test(int a);
    friend void Calculation(int x, test o1, test o2);
};

test::test(int ab)
{
    cout << "This is First time" << endl;
    for (int i = 0; i < ab; i++)
    {

        cout << "Give the Diistance" << endl;
        cin >> a[i]; // X1
        cout << "Again" << endl;
        cin >> b[i]; // Y1
    }
}

void Calculation(int x, test o1, test o2)
{
    int abcd[100];
    int abcde[100];
    int abcdf[100];

    for (int i = 0; i < x; i++)
    {
        abcd[i] = pow(o2.a[i] - o1.a[i], 2);
        abcde[i] = pow(o2.b[i] - o1.b[i], 2);
        abcdf[i] = sqrt(abcd[i] + abcde[i]);
    }
    for (int ia = 0; ia < x; ia++)
    {
        cout << "So the Distance Between " << o1.a[ia] << " , " << o1.b[ia] << " And " << o2.a[ia] << " , " << o2.b[ia] << " is " << abcdf[ia] << endl;
    }
}

int main()
{
    int a;
    cout << "Enter How much Complex Number You Want to Generate??" << endl;
    cin >> a;

    test Object_1(a), Object_2(a);
    Calculation(a, Object_1, Object_2);
    return 0;
}