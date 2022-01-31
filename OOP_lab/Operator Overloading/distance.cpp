#include <iostream>
using namespace std;

class Distance
{
    int foot;
    int inches;

public:
    Distance()
    {
        foot = 0;
        inches = 0;
    }
    Distance(int a, int b)
    {
        foot = a;
        inches = b;
    }
    void display()
    {
        cout << "Foot = " << foot << endl;
        cout << "Inches = " << inches << endl;
    }
    friend Distance operator+(Distance &, Distance &);
    friend Distance operator+(int d, Distance &);
    friend Distance operator*(Distance &b, int d);

    friend Distance operator-(Distance &);
};
Distance operator+(Distance &obj1, Distance &obj2)
{
    Distance obj;
    obj.foot = obj1.foot + obj2.foot;
    obj.inches = obj1.inches + obj2.inches;
    if (obj.inches > 12)
    {
        obj.foot += obj.inches / 12;
        obj.inches = obj.inches % 12;
    }
    return obj;
}
Distance operator+(int d, Distance &b)
{
    Distance ob;
    ob.foot = b.foot;
    ob.inches = d + b.inches;
    if (ob.inches > 12)
    {
        ob.foot += ob.inches / 12;
        ob.inches = ob.inches % 12;
    }
    return ob;
}
Distance operator*(Distance &b, int d)
{
    Distance ob;
    ob.foot = b.foot ;
    ob.inches = b.inches * d;
    if (ob.inches > 12)
    {
        ob.foot += ob.inches / 12;
        ob.inches = ob.inches % 12;
    }
    return ob;
}

Distance operator-(Distance &b)
{
    Distance ob;
    ob.foot = -(b.foot);
    ob.inches = -(b.inches);

    return ob;
}

int main()
{
    int f1, f2, i1, i2;
    cout << "Enter distance1 in feet and inches\n";
    cin >> f1 >> i1;
    Distance obj1(f1, i1);
    cout << "Enter distance2 in feet and inches\n";
    cin >> f2 >> i2;
    Distance obj2(f2, i2);

    Distance obj;
    obj = obj1 + obj2;

    obj.display();

    Distance ob;
    int d;
    cout << "Enter an integer to add in the resulting inches\n";
    cin >> d;
    ob = d + obj;

    cout << "Displaying the resulting(ob = d + obj) distance\n";
    ob.display();

    ob = ob * d;

    cout << "Displaying the resulting(ob = obj * d) distance\n";
    ob.display();

    cout << "Displaying the resulting( -obj ) distance\n";
    ob = -ob;
    ob.display();

    return 0;
}