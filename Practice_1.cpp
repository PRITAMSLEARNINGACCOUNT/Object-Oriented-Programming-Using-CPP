#include <iostream>
using namespace std;
class shop_data
{
private:
    int shop_item;
    int shop_item_id[100];
    int shop_item_price[100];

public:
    void set_data(void);
    void get_data(void);
    void initialize_shop_item(void);
};

void shop_data::initialize_shop_item(void)
{
    cout << "Give the number of item you have in your shop" << endl;
    cin >> shop_item;
}
void shop_data::set_data(void)
{
    for (int i = 0; i < shop_item; i++)
    {
        cout << "Give the id of the " << i + 1 << " item you have in your shop" << endl;
        cin >> shop_item_id[i];
        cout << "Give the price of that item" << endl;
        cin >> shop_item_price[i];
    }
}

void shop_data::get_data(void)
{
    for (int i = 0; i < shop_item; i++)
    {
        cout << "So the price of " << i + 1 << " item is " << shop_item_price[i]<<endl;
    }
}

int main()
{
    shop_data dukaan;
    dukaan.initialize_shop_item();
    dukaan.set_data();
    dukaan.get_data();
    return 0;
}