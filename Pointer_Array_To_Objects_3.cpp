#include <iostream>
using namespace std;
class Student_Info
{
private:
    int roll_no;
    int class_;

public:
    void Setting_Info(void);
    void Getting_Info(void)
    {
        cout << "The Student Is Currently Studying In Class " << class_ << endl;
        cout << "So The Roll Number Of The Student Is " << roll_no << endl;
    }
};

void Student_Info::Setting_Info(void)
{
    cout << "Enter The Roll No Of The Student??" << endl;
    cin >> roll_no;
    cout << "Enter The Class Of The Student??" << endl;
    cin >> class_;
}

int main()
{
    Student_Info Object_Array[2];
    Student_Info *pointer = Object_Array;
    for (int i = 0; i < 2; i++)
    {
        (pointer+i)->Setting_Info();
    }
    // for (int i = 1; i >= 0; i--)
    // {
    //     pointer--;
    // }
    for (int i = 0; i < 2; i++)
    {
        pointer->Getting_Info();
        pointer++;
    }

    return 0;
}