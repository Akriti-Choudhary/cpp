#include <iostream>
#include <string>
#include "Inventory_class.h"
using namespace std;
int main()
{
    inventory obj1("pens", 34);
    inventory obj2("pencil", 20);
    cout << "Stock  " << obj1.getstock() << endl;
    cout << "Purchase called "<<endl;
    obj1.purchase();
    cout << "Stock after call of purchase " << obj1.getstock() << endl;
    cout << "Stock  " << obj2.getstock() << endl;
    cout << "Sales called "<<endl;
    obj2.sale();
    cout << "Stock after call of Sales " << obj2.getstock() << endl;
}