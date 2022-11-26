#include <iostream>
using namespace std;
class Practice_3
{
private:
    int a[100], b[100];
    int ab;

public:
    Practice_3(int x);
    void generation_Printing(Practice_3, Practice_3,int n);
};
void Practice_3::generation_Printing(Practice_3 o1, Practice_3 o2, int n)
{
    int x[100];
    int y[100];
    for (int i = 0; i < n; i++)
    {
        x[i] = o1.a[i] + o2.a[i];
        y[i] = o1.b[i] + o2.b[i];
    }
    for (int ia = 0; ia < n; ia++)
    {
        cout << "Your " << ia + 1 << " Complex Number is " << x[ia] << " + " << y[ia] << " i " << endl;
    }
}

Practice_3::Practice_3(int x)
{
    ab = x;
    cout << "This is for A Diemension" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Enter the First Integer" << endl;
        cin >> a[i];
        cout << "Enter the Second Integer" << endl;
        cin >> b[i];
    }
}

int main()
{
    cout << "Enter how many(Under 100) Complex Number you want to Generate" << endl;
    int a;
    cin >> a;
    Practice_3 Object_1(a), Object_2(a);
    Object_1.generation_Printing(Object_1, Object_2, a);

    return 0;
}