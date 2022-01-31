#include <iostream>

using namespace std;
class first
{
protected:
    int b;

public:
    first()
    {
        b = 10;
    }
    virtual void display() = 0;
};
class second : public first
{
    int d;

public:
    second()
    {
        d = 20;
    }
    void display()
    {
        cout << b << d;
    }
};
int main()
{
    first *p;
    second s;
    p = &s;
    p->display();
    return 0;
}