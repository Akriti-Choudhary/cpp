#include <iostream>
using namespace std;
class A
{
public:
    int p;

    A()
    {
        p = 10;
    }
};
class B : public A
{
public:
    int q;
    B()
    {
        p = 40;
        q = 30;
    }
};

int main()
{
    A x;
    B y;
    cout << x.p;
    x = y;
    cout << x.p;

    return 0;
}