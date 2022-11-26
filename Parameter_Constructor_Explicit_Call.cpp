#include <iostream>
using namespace std;
class Parameter_Constructor
{
private:
    int a, b;

public:
    Parameter_Constructor(int, int);
    void Print_Complex_Number(void);
    friend int Complex_Number_Generator(Parameter_Constructor, Parameter_Constructor);
    friend int Complex_Number_Generator_2(Parameter_Constructor, Parameter_Constructor);
};

Parameter_Constructor::Parameter_Constructor(int x, int y)
{
    a = x;
    b = y;
}

int Complex_Number_Generator(Parameter_Constructor object_1, Parameter_Constructor object_2)
{
    int a;
    a = object_1.b + object_2.b;
    return a;
}
int Complex_Number_Generator_2(Parameter_Constructor object_1, Parameter_Constructor object_2)
{
    int a;
    a = object_1.a + object_2.a;
    return a;
}
void Parameter_Constructor::Print_Complex_Number(void)
{
    cout << "So the Complex number is " << a << " + " << b << " i " << endl;
}

int main()
{
    int a, b;
    Parameter_Constructor object_1 = Parameter_Constructor(4, 3);//Explicit Call
    Parameter_Constructor object_2 = Parameter_Constructor(8, 5);//Explicit Call
    a = Complex_Number_Generator_2(object_1, object_2);
    b = Complex_Number_Generator(object_1, object_2);
    Parameter_Constructor print_object(a, b);
    print_object.Print_Complex_Number();
    return 0;
}