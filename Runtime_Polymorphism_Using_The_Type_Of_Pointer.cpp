#include <iostream>
using namespace std;
class Base_Class
{
public:
    int a, b;
    void Set_Data(void)
    {
        cout << "Enter The Value Of First Varriable??" << endl;
        cin >> a;
        cout << "Enter The Value Of Second Varriable??" << endl;
        cin >> b;
    }
    void Show_Data(void)
    {
        cout << "So The Value Of First Varriable Is " << a << endl;
        cout << "So The Value Of Second Varriable Is " << b << endl;
    }
};

class Derived_Class : public Base_Class
{

public:
    int x, y;
    void Set_Data(void)
    {
        cout << "Enter The Value Of First Varriable??" << endl;
        cin >> x;
        cout << "Enter The Value Of Second Varriable??" << endl;
        cin >> y;
    }
    void Show_Data(void)
    {
        cout << "So The Value Of First Varriable Is " << x << endl;
        cout << "So The Value Of Second Varriable Is " << y << endl;
    }
};

int main()
{
    Base_Class *Pointer;
    Base_Class Base_Object;
    Derived_Class Derived_Object;
    Pointer = &Derived_Object;
    Pointer->Set_Data();
    Pointer->Show_Data();
    cout << "Executing The Functions From Base Class Because We Have Created A Pointer From Base Class" << endl;
    cout << "In Order To Access The Varriables And Functions From Derived Class,We Need To Create A Pointer From Derived Class And Pointed Out To The Object Of Derived Class" << endl;
    cout << "Hence It Is Proved That We Can Not Access Derived Class Data Memebers From Base Class Pointer,Though We Can Able To Make Point Out The Object From Derived Class To Base Class Pointer" << endl;
    Derived_Class *Derived_Pointer = &Derived_Object;
    Derived_Pointer->Set_Data();
    Derived_Pointer->Show_Data();
    return 0;
}