#include <iostream>
using namespace std;
class Base_Class
{
private:
    int a, b;

public:
    Base_Class Func(void)
    {
        return *this;
    }
    void Show_Something(void)
    {
        cout << "Hello World" << endl;
    }
};

int main()
{
    Base_Class Object;
    Object.Func().Show_Something();

    return 0;
}