#include <iostream>
using namespace std;
class Base_Class
{
private:
    int a, b;

public:
    void Base_Function(void)
    {
        cout << "Enter First Varriable??" << endl;
        cin >> a;
        cout << "Enter Second Varriable??" << endl;
        cin >> b;
    }
    void Show_Data(void)
    {
        cout << "So The Value Of First Varriable Is " << a << endl;
        cout << "So The Value Of Second Varriable Is " << b << endl;
    }
};

int main()
{
    cout << "Objects Array" << endl;
    Base_Class Object[2];
    Object[0].Base_Function();
    Object[0].Show_Data();
    Object[1].Base_Function();
    Object[1].Show_Data();
    cout << "Object Pointer" << endl;
    Base_Class Object_1;
    Base_Class *pointer = &Object_1;
    (*pointer).Base_Function();
    (*pointer).Show_Data();

    return 0;
}