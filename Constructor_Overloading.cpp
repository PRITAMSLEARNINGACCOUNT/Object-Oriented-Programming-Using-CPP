#include <iostream>
using namespace std;
class Constructor_Overloading
{
private:
    int a, b;
    float c, d;
    int xy;
    // int xyz;

public:
    Constructor_Overloading(int a, int b, int ab);
    Constructor_Overloading(float a, float b, int abc);
};

Constructor_Overloading::Constructor_Overloading(int x, int y, int ab)
{
    a = x;
    b = y;
    xy = ab;

    if (xy == 10)
    {
        cout << "Addition of two numbers Given by you is " << a + b << endl;
    }
    if (xy > 10)
    {
        cout << "Multiplication of Two numbers given by you is " << a * b << endl;
    }
    if (xy < 10)
    {
        cout << "Division of two numbers Given by you is " << a / b << endl;
    }
    if (xy == 0)
    {

        cout << "Subtraction of two numbers Given by you is " << a / b << endl;
    }
}
Constructor_Overloading::Constructor_Overloading(float t, float o, int ab)
{
    a = t;
    b = o;
    xy = ab;

    if (xy == 10)
    {
        cout << "Addition of two numbers Given by you is " << a + b << endl;
    }
    if (xy > 10)
    {
        cout << "Multiplication of Two numbers given by you is " << a * b << endl;
    }
    if (xy < 10)
    {
        cout << "Division of two numbers Given by you is " << a / b << endl;
    }
    if (xy == 0)
    {

        cout << "Subtraction of two numbers Given by you is " << a / b << endl;
    }
}

int main()
{
    char Multiply[100];
    char Float_Or_Integer[100];
    int ab, cd;
    int abcdf;
    // fflush(stdin);
    cout << "Give what Calculaion You Want To Perform???" << endl;
    cin.getline(Multiply, 100);
    cout << "Do You Want to do Calculation Based on Floating Point Numbers" << endl;
    cin.getline(Float_Or_Integer, 100);
    if (Float_Or_Integer[0] == 'Y' || Float_Or_Integer[0] == 'y')
    {
        float ab, cd;
        cout << "Enter The First Floating Point Number" << endl;
        cin >> ab;
        cout << "Enter The Second Floating Point Number" << endl;
        cin >> cd;
    }
    else
    {

        cout << "Enter The First Integer" << endl;
        cin >> ab;
        cout << "Enter The Second Integer" << endl;
        cin >> cd;
    }
    // fflush(stdin);
    if (Multiply[0] == 'A' || Multiply[0] == 'a')
    {
        abcdf = 10;
    }
    if (Multiply[0] == 'd' || Multiply[0] == 'D')
    {
        abcdf = 9;
    }
    if (Multiply[0] == 'S' || Multiply[0] == 's')
    {
        abcdf == 0;
    }
    if (Multiply[0] == 'M' || Multiply[0] == 'm')
    {
        abcdf = 11;
    }
    Constructor_Overloading Object_1(ab, cd, abcdf);

    return 0;
}