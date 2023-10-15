#include <iostream>
#include <string>
using namespace std;
class Simple_Interest
{
private:
    int principal;
    float rate_of_interest;
    int time;
    int returnvalue;

public:
    Simple_Interest(int, int, float);
    Simple_Interest(int, int, int);
};

Simple_Interest::Simple_Interest(int p, int t, float interest_rate)
{
    time = t;
    principal = p;
    rate_of_interest = interest_rate;
    returnvalue = 0;
    int array[1000];
    if (time == 1)
    {
        returnvalue = principal * (1 + rate_of_interest);
        cout << "So the Return Value after 1 Year is " << returnvalue << " And Interest Rate is " << (returnvalue - principal) << endl;
    }
    else
    {
        for (int i = 0; i < time; i++)
        {
            array[i] = (principal * (1 + rate_of_interest)) - principal;
            returnvalue = returnvalue += array[i];
        }
        // for (int a = 0; a < time; a++)
        // {
        //     returnvalue = returnvalue += array[a];
        // }

        // for (int ia = time; ia > 0; ia--)
        // {
        //     returnvalue = returnvalue - principal;
        //     // if (ia == 0)
        //     // {
        //     //     break;
        //     // }
        // }
        cout << "So The Return Value after " << t << " Years is " << returnvalue + principal << " And Interest Rate is " << returnvalue << endl;
    }
}

Simple_Interest::Simple_Interest(int p, int t, int interest_rate)
{
    time = t;
    principal = p;
    rate_of_interest = (float)interest_rate / 100;
    returnvalue = 0;
    int array[1000];
    if (time == 1)
    {
        returnvalue = principal * (1 + rate_of_interest);
        cout << "So the Return Value after 1 Year is " << returnvalue << " And Interest Rate is " << (returnvalue - principal) << endl;
    }
    else
    {
        for (int i = 0; i < time; i++)
        {
            array[i] = (principal * (1 + rate_of_interest)) - principal;
        }

        for (int a = 0; a < time; a++)
        {
            returnvalue = returnvalue += array[a];
        }

        // for (int ia = time; ia > 0; ia--)
        // {
        //     returnvalue = returnvalue - principal;
        //     // if (ia == 0)
        //     // {
        //     //     break;
        //     // }
        // }
        cout << "So The Return Value after " << t << " Years is " << returnvalue + principal << " And Interest Rate is " << returnvalue << endl;
    }

    // cout << "So The Return Value is " << returnvalue + principal << endl;
}

int main()
{
    int a, b;
    float c;
    string array;
    cout << "Do You Want To Give Interest Rate in Percentage or Not????" << endl;
    getline(cin, array);
    if (array[0] == 'y' || array[0] == 'Y')
    {
        int c;
        cout << "Enter the Principal Amount" << endl;
        cin >> a;
        cout << "Enter the Interest Rate" << endl;
        cin >> c;
        cout << "Enter the Time Period" << endl;
        cin >> b;
        Simple_Interest Object_1(a, b, c);
    }
    else
    {
        // int c;
        cout << "Enter the Principal Amount" << endl;
        cin >> a;
        cout << "Enter the Interest Rate" << endl;
        cin >> c;
        cout << "Enter the Time Period" << endl;
        cin >> b;
        Simple_Interest Object_1(a, b, c);
        /* code */
    }

    // Simple_Interest Object_1(a, b, );
    // Simple_Interest Object_1(10000, 5, 0.10);
    return 0;
}