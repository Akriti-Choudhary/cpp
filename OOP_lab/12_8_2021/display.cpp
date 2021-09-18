#include <iostream>
using namespace std;
class display
{
public:
    void dis()
    {
        for (int i = 10; i >= 1; --i)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    display d;
    d.dis();
}