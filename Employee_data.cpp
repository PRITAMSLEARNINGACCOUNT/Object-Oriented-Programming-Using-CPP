#include <iostream>
using namespace std;
class employee_data
{
private:
    int employee_salary;
    static int count;

public:
    int employee_id;
    void setdata(void);
    void getdata(void);
    void countdisplay(void);
    int incrementation_of_employee_id(int a);
    void initialization_of_first_employee_id(void);
};
int employee_data::count;
void employee_data::initialization_of_first_employee_id(void)
{
    cin >> employee_id;
}

int employee_data::incrementation_of_employee_id(int a)
{
    employee_id = a;
    int temp = employee_id + count;
    employee_id = temp;
    return employee_id;
}
void employee_data::setdata(void)
{
    // cout << "" << endl;
    cin >> employee_salary;
    count++;
}
void employee_data::getdata(void)
{
    cout << "So the salary of " << employee_id << " this id is " << employee_salary << endl;
}

int main()
{
    int a;
    employee_data harry[100];
    cout << "Give how much inputt you want to give to this programme" << endl;
    cin >> a;
    cout << "Give an id of the first employee" << endl;
    harry[0].initialization_of_first_employee_id();
    for (int i = 0; i < a; i++)
    {
        if (i > 0)
        {
            cout << "Give the salary of " << i+1 << " employee " << endl;
            harry[i].incrementation_of_employee_id(harry[0].employee_id);
            harry[i].setdata();
        }
        else
        {
            cout << "Give the salary of that employee" << endl;
            harry[i].setdata();
        }
    }

    for (int j = 0; j < a; j++)
    {
        harry[j].getdata();
    }

    return 0;
}