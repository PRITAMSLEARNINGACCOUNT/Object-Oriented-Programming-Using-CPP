#include <iostream>
using namespace std;
class Pritam_Shop
{
private:
    int cadbury;
    int chocolate;

public:
    void Item_Iniialization(void)
    {
        cout << "Enter How Much Cadbury You Have In Your Shop???" << endl;
        cin >> cadbury;
        cout << "Enter How Much Total Chocolate You Have In Your Shop???" << endl;
        // cout << "Enter How Much Total Chocolate You Have In Your Shop???" << endl;
        cin >> chocolate;
    }
    void display_Item(void)
    {
        cout << "So The Total Amount Of Cadbury In My Shop Is " << cadbury << endl;
        cout << "So The Total Amount Of Chocolate In My Shop Is " << chocolate << endl;
    }
    // Pritam_Shop(int x, int y)
    // {
    //     cout << "This is the Constructor" << endl;
    // }
    // ~Pritam_Shop()
    // {
    //     cout << "The Destructor is Called" << endl;
    // }
    // Pritam_Shop() {}
    // ~Pritam_Shop()
    // {
    //     cout << "The Destructor is Called" << endl;
    // }
};
class aditya_shop : public Pritam_Shop
{
    int fruits;
    int fruits_count;

public:
    void fruit_count(void)
    {
        cout << "Enter how much Total Fruits Do You Have in Your Shop????" << endl;
        cin >> fruits_count;
        cout << "Enter how Many Types Of Fruits Do You Have in Your Shop????" << endl;
        cin >> fruits;
    }
    void display_Count(void)
    {
        cout << "Total Fruits In Your Shop is " << fruits_count << endl;
        cout << "Total Type of Fruits In Your Shop is " << fruits << endl;
    }
};
int main()
{
    aditya_shop A1;
    A1.Item_Iniialization();
    A1.display_Item();
    A1.fruit_count();
    A1.display_Count();

    return 0;
}