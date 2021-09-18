#include <iostream>
using namespace std;
class two;
class one
{
    int x;

public:
    void input(int i)
    {
        x = i;
    }
    void display()
    {
        cout << " x=" << x << " ";
    }
    friend void swap(one, two);
};
class two
{
    int y;

public:
    void input(int j)
    {
        y = j;
    }
    void display()
    {
        cout << " y=" << y;
    }
    friend void swap(one, two);
};
void swap(one a, two b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << "  x=" << a.x << "  y=" << b.y;
}
int main()
{
    one on;
    two tw;
    cout << "\nBefore swapping";
    on.input(99);
    tw.input(23);
    on.display();
    tw.display();
    cout << "\nAfter swapping";
    swap(on, tw);
}