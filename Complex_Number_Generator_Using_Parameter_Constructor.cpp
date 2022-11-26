#include <iostream>
using namespace std;
class test
{
private:
    int a, b;

public:
    test(int, int);
    void Print_Complex_Number(void);

    friend test hello_world(test, test);
};
test hello_world(test o1, test o2)
{
    int a, b;
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    test temp(a, b);
    return temp;
}
test::test(int x, int y)
{
    a = x;
    b = y;
}
void test::Print_Complex_Number(void)
{
    cout << "So the complex Number is " << a << " And " << b << endl;
}

int main()
{

    test object_1(4, 3), object_2(8, 5);
    test object3 = hello_world(object_1, object_2);
    object3.Print_Complex_Number();

    return 0;
}