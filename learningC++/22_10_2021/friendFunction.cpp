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
    friend Distance add(Distance &ob1, Distance &ob2);
};
Distance add(Distance &ob1, Distance &ob2)
{
    Distance ob;
    ob.a = ob1.a + ob2.a;
    ob.b = ob1.b + ob2.b;
    return ob;
}
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
    obj = add(obj1, obj2);

    obj.display();
    return 0;
}