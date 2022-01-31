#include <iostream>
using namespace std;

class Distance
{
    int a;
    int b;

public:
    Distance()
    {
        a = 0;
        b = 0;
    }
    Distance(int p, int q)
    {
        a = p;
        b = q;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    Distance add(Distance &ob2)
    {
        Distance ob;
        ob.a = this->a + ob2.a;
        ob.b = this->b + ob2.b;
        return ob;
    }
};
int main()
{
    int f1, f2, i1, i2;
    cout << "Enter a and b\n";
    cin >> f1 >> i1;
    Distance obj1(f1, i1);
    cout << "Enter a and b\n";
    cin >> f2 >> i2;
    Distance obj2(f2, i2);

    Distance obj;
    obj = obj1.add(obj2);

    obj.display();
    return 0;
}