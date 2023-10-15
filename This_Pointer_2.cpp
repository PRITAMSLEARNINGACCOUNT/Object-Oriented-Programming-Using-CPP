#include <iostream>
using namespace std;
class Base_Class
{
private:
    char s = 'A';

public:
    Base_Class Set_Value(char s)
    {
        (*this).s = s;
        return *this;
    }
    void Show_Something(void)
    {
        cout << "The Charecter You Set In Charecter Varriable Is " << s << endl;
    }
};

int main()
{
    Base_Class Object;
    Object.Set_Value('B').Show_Something();
    return 0;
}