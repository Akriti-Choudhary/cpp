#include <iostream>

using namespace std;
class N
{
    int a;

public:
    N()
    {
    }
    N(int p) { a = p; }
    void show()
    {
        cout << "a = " << a << endl;
    }
    void operator=(N &obj)
    {
        a = obj.a;
    }
};

int main()
{
    N obj(4);
    N obj1(5);

    cout << "obj\n";
    obj.show();
    cout << "obj1\n";
    obj1.show();

    obj1 = obj;

    cout << "obj\n";

    obj.show();
    cout << "obj1\n";

    obj1.show();

    return 0;
}