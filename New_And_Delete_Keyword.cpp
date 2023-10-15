#include <iostream>
using namespace std;

int main()
{
    int a;

    int *pointer = new int(450);
    cout << "The Value Stored Under The Pointer Is " << *pointer << endl;
    float *pointer_2 = new float[3];
    pointer_2[0] = 45.65;
    pointer_2[1] = 450.65;
    pointer_2[2] = 45997.65;
    for (int i = 0; i < 3; i++)
    {
        cout << "The Value Of " << i << " Pointer Varriable Is " << pointer_2[i] << endl;
    }
    delete pointer;
    cout << "This Is Now The Value Of The Integer Pointer Varriable Which Was Declared Previously By You " << *pointer << endl;
    cout << "Now As You Can See That The Integer Pointer Which Was Declared Previously Has Been Successfully Deleted" << endl;

    return 0;
}