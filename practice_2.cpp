#include <iostream>
using namespace std;
class shop_data
{
private:
    int shop_item;
    int shop_item_price[100];
    int shop_item_id[100];

public:
    void shop_item_set_data(void);
    void setdata(void);
    void getdata(void);
    void itemidinitialization(void);
    void itemidincrementation(void);
};
void shop_data::setdata(void)
{
    for (int i = 0; i < shop_item; i++)
    {
        cout << "Enter the price of " << i + 1 << " item " << endl;
        cin >> shop_item_price[i];
    }
}
void shop_data::itemidinitialization(void)
{
    cout << "Give the id of first item" << endl;
    cin >> shop_item_id[0];
}
void shop_data::itemidincrementation(void)
{
    for (int i = 1; i < shop_item; i++)
    {
        int a = shop_item_id[0];
        shop_item_id[i] = a + i;
    }
}
void shop_data::shop_item_set_data(void)
{
    cout << "Enter how many shop item you have in your shop" << endl;
    cin >> shop_item;
}

void shop_data::getdata(void)
{
    for (int i = 0; i < shop_item; i++)
    {
        cout << "The id of your item is " << shop_item_id[i] << " And the price of that item is " << shop_item_price[i] << endl;
    }
}

int main()
{
    int dukaan_data;
    cout << "Enter how much dukaan data you want to entry" << endl;
    cin >> dukaan_data;
    shop_data dukaan[100];
    for (int i = 0; i < dukaan_data; i++)
    {
        cout << "This is for dukaan number " << i + 1 << endl;
        dukaan[i].shop_item_set_data();
        dukaan[i].itemidinitialization();
        dukaan[i].itemidincrementation();
        dukaan[i].setdata();
    }
    for (int j = 0; j < dukaan_data; j++)
    {
        cout << "This is dukaan data no. " << j + 1 << endl;
        dukaan[j].getdata();
    }

    return 0;
}