#include <iostream>
using namespace std;

class Distance
{
    int a;

public:
    Distance()
    {
        a = 0;
    }
    Distance(int p)
    {
        a = p;
    }
    void display()
    {
        cout << "Product = " << a << endl;
    }
    friend Distance operator*(int d, Distance &ob1);
};
    Distance operator*(int d, Distance &ob1)
    {
        Distance obj;
        obj.a =  d * (ob1.a);
        return obj;
    }
int main()
{
    int a;
    cout << "Enter a \n";
    cin >> a ;
    Distance obj1(a);

    int d;
    cout<<"Enter d\n";
    cin>>d;
    Distance obj;
    obj = d * obj1;
    obj.display();
    return 0;
}