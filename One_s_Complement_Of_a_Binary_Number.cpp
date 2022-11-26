#include <iostream>
using namespace std;

class Binary_Number_Detector
{
private:
    string abc;

public:
    void Taking_Input_From_User(void);
    void Cheecking_The_Input(void);
};

void Binary_Number_Detector::/*Scope resolution operator*/ Taking_Input_From_User(void)
{
    cout << "Enter a number" << endl;
    cin >> abc;
}

void Binary_Number_Detector::Cheecking_The_Input(void)
{
    int temp = 0;
    int temp1 = 0;
    int a = abc.length();
    for (int i = 0; i < abc.length(); i++)
    {

        if (abc.at(i) == '0' || abc.at(i) == '1')
        {
            temp++;
        }
        else
        {
            temp1++;
        }
    }
    if (temp == a)
    {
        cout << "This is a Binary Number" << endl;

        cout << "The binary number is " << abc << endl;
        for (int i = 0; i < a; i++)
        {
            if (abc.at(i) == '0')
            {
                abc.at(i) = '1';
            }
            else
            {
                abc.at(i) = '0';
            }
        }
        cout << "The Complement of the binary number is ";

        for (int i = 0; i < a; i++)
        {
            cout << abc.at(i);
        }
    }
    else
    {
        cout << "This is not a Binary Number" << endl;
    }
}
int main()
{
    Binary_Number_Detector a;
    a.Taking_Input_From_User();
    a.Cheecking_The_Input();

    return 0;
}