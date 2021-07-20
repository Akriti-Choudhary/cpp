#include <iostream>
#include <string>
#include "Invoice_class.h"
using namespace std;

Invoice::Invoice(std::string num, std::string des, int quant, int pp)
{
    setnum(num);
    setdes(des);
    setquant(quant);
    setpp(pp);
}
void Invoice::setnum(std::string num)
{
    number = num;
}
string Invoice::getnum()
{
    return number;
}
void Invoice::setdes(std::string des)
{
    description = des;
}
string Invoice::getdes()
{
    return description;
}
void Invoice::setquant(int quan)
{
    if (quan < 0)
    {
        quantity = 0;
    }
    else
    {
        quantity = quan;
    }
}
int Invoice::getquant()
{
    return quantity;
}
void Invoice::setpp(int pp)
{
    if (pp < 0)
    {
        price = 0;
    }
    else
    {
        price = pp;
    }
}
int Invoice::getpp()
{
    return price;
}
int Invoice::getInvoiceAmount()
{
    return (quantity * price);
}
