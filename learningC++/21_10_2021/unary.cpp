#include <iostream>
using namespace std;
class N
{
    int x;
    int y;
    int z;

public:
    N()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    N(int p, int q , int r)
    {
        x = p;
        y = q;
        z = r;
    }

    friend void operator -(N &a);

    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;

    }
};
void operator -(N &a)
{
    a.x = -(a.x);
    a.y = -(a.y);
    a.z = -(a.z);

}
int main()
{
    N ob(2,3,4);
    -ob;
    ob.show();
    return 0;
}