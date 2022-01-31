#include <iostream>

using namespace std;
class Data
{

    int x;
    float p;

public:
    Data()
    {
        x = 0;
        p = 0;
    }
    Data(float m)
    {
        x = 2;
        p = m;
    }
    void show()
    {
        cout << x << " " << p;
    }
};
int main()
{
    Data z;
    z = 2;
    z.show();
    z = 3.5;
    z.show();
    return 0;
}