#include <iostream>
#include <string>
class Invoice
{
public:
    Invoice(std::string num = " ", std::string des = " ", int quant = 0, int pp = 0);
    void setnum(std::string num);
    std::string getnum();
    void setdes(std::string des);
    std::string getdes();
    void setquant(int quan);
    int getquant();
    void setpp(int pp);
    int getpp();
    int getInvoiceAmount();

private:
    std::string number;
    std::string description;
    int quantity;
    int price;
};
