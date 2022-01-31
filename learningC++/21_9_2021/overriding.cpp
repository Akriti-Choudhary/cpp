#include <iostream>
using namespace std;

class M
{
    public:
    void show()
    {
        cout<<"hii\n";
    }
};
class N
{
    public:
    void show()
    {
        cout<<"hello\n";
    }
};

class P :public M, public N{

    public:
    void show()
    {
        cout<<"Akriti\n";
        M::show();
        N::show();

    }
};

int main()
{
    P ob;
    ob.show();
}