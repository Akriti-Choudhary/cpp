#include <iostream>
#include <string>
#include "Inventory_class.h"
using namespace std;
inventory::inventory(std::string des, int balance)
    : description(des), balance_stock(balance)
{   
    cout<<description<<endl;
    if (balance_stock < 20)
    {
        cout << "Balance stock is less than the company's minimum stock level" << endl;
    }
}
void inventory::purchase()
{
    ++balance_stock;
}
void inventory::sale()
{
    if (balance_stock > 20)
    {
        --balance_stock;
    }
    else
    {
        cout << "After Sale function Balance stock will be less than the company's minimum stock level" << endl;
    }
}
int inventory::getstock()
{
    return balance_stock;
}
