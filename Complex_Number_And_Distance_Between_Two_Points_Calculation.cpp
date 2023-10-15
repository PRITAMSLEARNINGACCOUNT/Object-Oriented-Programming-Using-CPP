#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Distance_Between_Two_Points;
class complex
{
private:
    int a, b;
    friend Distance_Between_Two_Points;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex() {}
    complex generation(complex object_1, complex object_2)
    {
        complex temp_object;
        temp_object.a = object_1.a + object_2.a;
        temp_object.b = object_1.b + object_2.b;
        return temp_object;
    }
    void display(void)
    {
        cout << "The Two Dimensional Complex Number is " << a << " + " << b << "i" << endl;
    }
};
class Distance_Between_Two_Points
{
    int temp_varriable;
    int temp_varriable_2;
    int final_temp_varriable;

public:
    int calculation(complex object_1, complex object_2)
    {
        temp_varriable = pow((object_2.a - object_1.a), 2);
        temp_varriable_2 = pow((object_2.b - object_1.b), 2);
        final_temp_varriable = sqrt(temp_varriable + temp_varriable_2);
        return final_temp_varriable;
    }
    void display(void)
    {
        cout << "So The Distance Between Two Points is " << final_temp_varriable << endl;
    }
};
int main()
{
    string array;
    int ab, cd, ef, gh;
    cout << "What Do You Want To Calculate Complex Number or Distance Between Two Points or Both???" << endl;
    getline(cin, array);
    cout << "Enter The First Integer(First Dimension)" << endl; // X1
    cin >> ab;
    cout << "Enter The Second Integer(First Dimension)" << endl; // Y1
    cin >> cd;
    cout << "Enter The First Integer(Second Dimension)" << endl; // X2
    cin >> ef;
    cout << "Enter The Second Integer(Second Dimension)" << endl; // Y2
    cin >> gh;
    complex Object_1(ab, cd);
    complex Object_2(ef, gh);
    if (array[0] == 'C' || array[0] == 'c')
    {
        // complex Object_1(ab, cd);
        // complex Object_1(ab, cd);
        // complex Object_2(ef, gh);
        complex Final_Object = Final_Object.generation(Object_1, Object_2);
        Final_Object.display();
    }
    if (array[0] == 'D' || array[0] == 'd')
    {
        Distance_Between_Two_Points Object_12;
        cout << "So Distance Between (" << ab << " , " << cd << ") And (" << ef << " , " << gh << ") is " << Object_12.calculation(Object_1, Object_2);
    }
    if (array[0] == 'B' || array[0] == 'B')
    {
        complex Final_Object = Final_Object.generation(Object_1, Object_2);
        Final_Object.display();
        Distance_Between_Two_Points Object_12;
        int n = Object_12.calculation(Object_1, Object_2);
        Object_12.display();
    }

    return 0;
}