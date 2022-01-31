#include <iostream>
using namespace std;

void divide(int x, int y, int z)
{
    if ((x - y) != 0)
    {
        int R = z / (x - y);
        cout << "R = " << R;
    }
    else
    {
        throw(x - y);
    }
}
int main()
{
    try
    {
        cout << "Try block\n";
        divide(20, 10, 30);
        divide(10, 10, 30);
    }
    catch (int i)
    {
        cout << "caught exception\n";
    }
}