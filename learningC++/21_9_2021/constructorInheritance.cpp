#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A()
    {
        x = 5;
        cout << "x = " << x << endl;
    }
    ~A()
    {
        cout<<"Class A destructor is called \n";
    }
};
class B : public A
{
    int y;

public:
    B()
    {
        y = 10;
        cout << "y = " << y << endl;
    }
    ~B()
    {
        cout<<"Class B destructor is called \n";
    }
};

int main()
{
    B ob;
    return 0;
}