#include <iostream>
using namespace std;
class N
{
    int x;

public:
    N()
    {
        x = 0;
    }
    N(int p)
    {
        x = p;
    }

    void friend operator++(N &a);

    void show()
    {
        cout << "x = " << x << endl;
    }
};
void operator++(N &a)
{
    ++(a.x);
}
int main()
{
    N ob(2);
    ++ob;
    ob.show();
    return 0;
}