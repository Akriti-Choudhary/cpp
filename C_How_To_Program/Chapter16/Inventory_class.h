#include <string>
class inventory
{
public:
    inventory(std::string des, int balance);
    void purchase();
    void sale();
    int getstock();

private:
    std::string description;
    int balance_stock;
};