#include <iostream>
using namespace std;
class Employee
{
private:
    int employee_id;
    int employee_salary;
    static int employee_count;

public:
    void getdata(void);
    void setdata(void);
    void display_employee_count(void);
};
int Employee::employee_count;
void Employee::setdata(void)
{
    cout << "Give the id of an Employee" << endl;
    cin >> employee_id;
    cout << "Give the salary of an Employee" << endl;
    cin >> employee_salary;
    employee_count++;
}

void Employee::getdata(void)
{
    cout << "So the id of an employee is " << employee_id << " and the salary of that employee is " << employee_salary << endl;
}
void Employee::display_employee_count(void)
{
    cout << "The total number of employee is " << employee_count+1 << endl;
}

int main()
{
    Employee pritam,aditya;
    pritam.setdata();
    aditya.setdata();
    aditya.getdata();
    pritam.getdata();
    Employee::display_employee_count;
    return 0;
}