#include <iostream>
using namespace std;
class Base_Class
{
protected:
    int a, b;

public:
    Base_Class(int k) : a(k), b(a)
    {
        cout << "The Value Of First Varriable Is " << a << endl;
        cout << "The Value Of Second Varriable Is " << b << endl;
    }
};

class Second_Class
{
protected:
    int var_1, var_2;

public:
    Second_Class(int temp) : var_2(temp), var_1(var_2)
    {
        cout << "The Value Of First Varriable From Second Class Is " << var_1 << endl;
        cout << "The Value Of Second Varriable From Second Class Is " << var_2 << endl;
    }
};
class Third_Class
{
private:
    int varriable_3, varriable_4;

public:
    Third_Class(int m, int n)
    {
        varriable_4 = m;
        varriable_3 = varriable_4;
        cout << "The Value Of First Varriable From Third Class " << varriable_3 << endl;
        cout << "The Value Of Second Varriable From Third Class " << varriable_4 << endl;
    }
};

int main()
{
    cout << "Differenciating Between Manual Initialization Of Varriables In A Constructor Of One Class And A Different Approach To Do The Same Thing" << endl;
    Base_Class Object_1(690);

    Second_Class Obj(6);
    cout << "We Are Having Some Garbage Value Because Of The Value Initialization In The Different Approach" << endl;
    Third_Class o(6, 9);
    cout << "Now We Are Having Perfect Values Even After Doing The Same Thing For Which We Were Having Some Garbage Values Because We Have Used The Old Method." << endl;

    return 0;
}