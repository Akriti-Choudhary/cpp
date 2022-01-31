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
class B 
{
public:
    int q;
    A y;
    B()
    {
        q = 30;
    }
    void output()
    {
        cout<<y.p<<" "<<q<<endl;
    }
};

int main()
{
    B z;
    z.output();
    return 0;
}