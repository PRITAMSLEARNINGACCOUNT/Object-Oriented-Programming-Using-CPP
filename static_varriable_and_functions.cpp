#include <iostream>
using namespace std;
//Static functions are only able to take value from static varriables
class Employee
{

    int employee_id;
    int employee_salary;

public:
    static int count; // Automatically Initialize value to 0
    void setdataofemployee(void);
    void getdataofemployee(void);
};
int Employee::count; // Static varriable initialization

void Employee::setdataofemployee(void)
{
    cout << "Give the id of the employee" << endl;
    cin >> employee_id;
    cout << "Give the Salary of the employee" << endl;
    cin >> employee_salary;
    count++;
}
void Employee::getdataofemployee(void)
{
    cout << "Employee id" << employee_id << endl;
    cout << "Employee salary" << employee_salary << endl;
}
int main()
{
    Employee harry[100];
    int a = 0;
    cout << "Give how much employee data you want to store" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        harry[i].setdataofemployee();
    }
    cout << "So the total employee data given by the user is " << a << endl;
    cout << "So the total employee data is " << Employee::count << endl;
    cout << "Now the data given by the user of employees are down below" << endl;
    for (int j = 0; j < a; j++)
    {
        cout << "The data of employee number " << j + 1 << " is";
        harry[j].getdataofemployee();
    }

    return 0;
}