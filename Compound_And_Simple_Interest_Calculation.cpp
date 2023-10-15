#include <iostream>
#include <string>
using namespace std;
class Compund_Interest
{
private:
    int principal_ammount;
    int period_of_time;
    float rate_of_interest;
    int return_amount;

public:
    Compund_Interest(int, int, float);
    Compund_Interest(int, int, int);
    Compund_Interest(int, int, float, int);
    Compund_Interest(int, int, int, int);
};

Compund_Interest::Compund_Interest(int principal_value, int years, int interest_rate)
{
    principal_ammount = principal_value;
    period_of_time = years;
    rate_of_interest = float(interest_rate) / 100;
    return_amount = principal_ammount;
    if (period_of_time == 1)
    {
        cout << "So the return Value Based On the Princhipal Value after A Time Period is " << principal_ammount * (1 + rate_of_interest) << endl;
    }
    else
    {
        for (int i = 1; i < period_of_time; i++)
        {
            return_amount = return_amount * (1 + rate_of_interest);
        }
        cout << "So the return Value Based On the Princhipal Value after A Time Period is " << return_amount << endl;
    }
}

Compund_Interest::Compund_Interest(int Principal_Value, int years, float interest_rate)
{
    principal_ammount = Principal_Value;
    period_of_time = years;
    rate_of_interest = interest_rate;
    return_amount = principal_ammount * (1 + rate_of_interest);
    if (period_of_time == 1)
    {
        cout << "So the return Value Based On the Princhipal Value after 1 Year is " << principal_ammount * (1 + rate_of_interest) << endl;
    }
    else
    {
        for (int i = 1; i < period_of_time; i++)
        {
            return_amount = return_amount * (1 + rate_of_interest);
        }
        cout << "So the return Value Based On the Princhipal Value after" << period_of_time << " Years is " << return_amount << endl;
    }
}
Compund_Interest::Compund_Interest(int p, int t, float interest_rate, int abcd)
{
    period_of_time = t;
    principal_ammount = p;
    rate_of_interest = interest_rate;
    return_amount = 0;
    int array[1000];
    if (period_of_time == 1)
    {
        return_amount = principal_ammount * (1 + rate_of_interest);
    }
    else
    {
        for (int i = 0; i < period_of_time; i++)
        {
            array[i] = (principal_ammount * (1 + rate_of_interest)) - principal_ammount;
        }
        for (int a = 0; a < period_of_time; a++)
        {
            return_amount = return_amount += array[a];
        }

        // for (int ia = time; ia > 0; ia--)
        // {
        //     returnvalue = returnvalue - principal;
        //     // if (ia == 0)
        //     // {
        //     //     break;
        //     // }
        // }
    }

    cout << "So The Return Value is " << return_amount + principal_ammount << endl;
}
Compund_Interest::Compund_Interest(int p, int t, int interest_rate, int abcd)
{
    period_of_time = t;
    principal_ammount = p;
    rate_of_interest = float(interest_rate) / 100;
    return_amount = 0;
    int array[1000];
    if (period_of_time == 1)
    {
        return_amount = principal_ammount * (1 + rate_of_interest);
    }
    else
    {
        for (int i = 0; i < period_of_time; i++)
        {
            array[i] = (principal_ammount * (1 + rate_of_interest)) - principal_ammount;
        }
        for (int a = 0; a < period_of_time; a++)
        {
            return_amount = return_amount += array[a];
        }

        // for (int ia = time; ia > 0; ia--)
        // {
        //     returnvalue = returnvalue - principal;
        //     // if (ia == 0)
        //     // {
        //     //     break;
        //     // }
        // }
    }

    cout << "So The Return Value is " << return_amount + principal_ammount << endl;
}

int main()
{
    int a, b;
    float c;
    char float_or_integer[100];
    string array;
    cout << "Do You Want To Calculate Simple Interest or Compound Interest???" << endl;
    getline(cin, array);
    cout << "Do you Want To Give Interest Rate in Percentage or Not??" << endl;
    cin.getline(float_or_integer, 100);

    if (array[0] == 'S' || array[0] == 's')
    {
        if (float_or_integer[0] == 'Y' || float_or_integer[0] == 'y')
        {
            int attr = 98;
            int c;
            cout << "Enter the Principal Amount" << endl;
            cin >> a;
            cout << "Enter the Period of Time You Want to Calculate The Return Value" << endl;
            cin >> b;
            cout << "Enter the Interest Rate" << endl;
            cin >> c;
            Compund_Interest Object_1(a, b, c, attr);
        }
        else
        {
            int attr = 98;
            cout << "Enter the Principal Amount" << endl;
            cin >> a;
            cout << "Enter the Period of Time You Want to Calculate The Return Value" << endl;
            cin >> b;
            cout << "Enter the Interest Rate" << endl;
            cin >> c;
            Compund_Interest Object_1(a, b, c, attr);
        }
    }
    else
    {
        if (float_or_integer[0] == 'Y' || float_or_integer[0] == 'y')
        {
            int c;
            cout << "Enter the Principal Amount" << endl;
            cin >> a;
            cout << "Enter the Period of Time You Want to Calculate The Return Value" << endl;
            cin >> b;
            cout << "Enter the Interest Rate" << endl;
            cin >> c;
            Compund_Interest Object_1(a, b, c);
        }
        else
        {
            // float c;
            cout << "Enter the Principal Amount" << endl;
            cin >> a;
            cout << "Enter the Period of Time You Want to Calculate The Return Value" << endl;
            cin >> b;
            cout << "Enter the Interest Rate" << endl;
            cin >> c;
            Compund_Interest Object_1(a, b, c);
        }
    }

    return 0;
}