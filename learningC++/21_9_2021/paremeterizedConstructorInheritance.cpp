#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int p)
    {
        x = p;
        cout << "x = " << x << endl;
    }
    ~A()
    {
        cout << "Class A destructor is called \n";
    }
};
class B : public A
{
    int y;

public:
    B(int c, int d) : A(d)
    {
        y = 10;
        cout << "y = " << y << endl;
    }
    ~B()
    {
        cout << "Class B destructor is called \n";
    }
};

int main()
{
    B ob(2,3);
    return 0;
}