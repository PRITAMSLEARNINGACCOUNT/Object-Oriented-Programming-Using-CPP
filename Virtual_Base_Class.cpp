#include <iostream>
using namespace std;
class GrandFather
{
protected:
    int age;
    int savings;

public:
    void Set_Data(int a, int s)
    {
        age = a;
        savings = s;
    }
    void GrandFather_Details(void)
    {
        cout << "The Age Of The GrandFather Is " << age << endl;

        cout << "GrandFather Has " << savings << " Rupees Savings" << endl;
    }
};

class Father : virtual public GrandFather
{
protected:
    int age_2;
    int savings_2;

public:
    void Set_Data_2(int age)
    {
        age_2 = age;
        savings_2 = savings * 20 / 100;
    }
    void Father_Details(void)
    {

        cout << "The Age Of The Father Is " << age_2 << endl;
        cout << "Father Has " << savings_2 << " Rupees Savings" << endl;
    }
};

class Mother : virtual public GrandFather
{
protected:
    int age_3;
    int savings_3;

public:
    void Set_Data_3(int age)
    {
        age_3 = age;
        savings_3 = savings * 50 / 100;
    }
    void Mother_Details(void)
    {

        cout << "The Age Of The Mother Is " << age_3 << endl;
        cout << "Mother Has " << savings_3 << " Rupees Savings" << endl;
    }
};

class Child : public Mother, public Father
{
protected:
    int age_4;
    int money;

public:
    void Set_Data_4(int age)
    {
        age_4 = age;
        int temp = savings_2 + savings_3;
        money = temp * 5 / 100;
    }
    void Display_Data(void)
    {
        cout << "After Spending GrandFather's Savings Among Their Children And Their GrandSon" << endl;
        cout << "The Age Of The GrandFather Is " << age << endl;
        cout << "GrandFather Has " << savings - (savings_2 + savings_3) << " Rupees Savings" << endl;
        cout << "The Age Of The Father Is " << age_2 << endl;
        cout << "Father Has " << savings_2 - (money * 50 / 100) << " Rupees Savings" << endl;
        cout << "The Age Of The Mother Is " << age_3 << endl;
        cout << "Mother Has " << savings_3 - (money * 50 / 100) << " Rupees Savings" << endl;
        cout << "The Age Of The Child Is " << age_4 << endl;
        cout << "Child Has " << money << " Rupees With Him" << endl;
    }
};

int main()
{
    Child Object_1;
    Object_1.Set_Data(75, 750000);
    Object_1.GrandFather_Details();
    Object_1.Set_Data_2(50);
    Object_1.Father_Details();
    Object_1.Set_Data_3(40);
    Object_1.Mother_Details();
    Object_1.Set_Data_4(10);
    Object_1.Display_Data();

    return 0;
}