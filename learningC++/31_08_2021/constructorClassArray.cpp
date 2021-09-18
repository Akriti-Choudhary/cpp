#include <iostream>
class Num
{
    int a, b, c;

public:
    int x;
    void output()
    {
        std::cout << "a = " << a << "b = " << b << "c = " << c << "x = " << x << std::endl;
    }
    Num();
};
    Num::Num()
    {
        a = 2;
        b = 3;
        c = 4;
        x = 5;
        std::cout << "Constructor is called" << std::endl;
    }


int main()
{
    Num n1;
    Num n2;
    Num n3[5];
    return 0;
}