#include <iostream>
using namespace std;
class Distance
{
    int dFeet;
    int dInch;

public:
    void input()
    {
        cout << "enter distance in feet :" << endl;
        cin >> dFeet;
        cout << "enter distance in inch :" << endl;
        cin >> dInch;
    }
    Distance calculate(Distance c2)
    {
        Distance obj;
        obj.dFeet = dFeet + c2.dFeet;
        obj.dInch = dInch + c2.dInch;
        if (dInch >= 12)
        {
            obj.dInch = obj.dInch - 12;
            obj.dFeet++;
        }
        return obj;
    }
    void add(Distance c1, Distance c2)
    {
        dFeet = c1.dFeet + c2.dFeet;
        dInch = c1.dInch + c2.dInch;
        if (dInch >= 12)
        {
            dInch = dInch - 12;
            dFeet++;
        }
        cout << "using c3.add(c1,c2) :" << endl;
        cout << "distance in feet :" << dFeet << endl;
        cout << "enter distance in inch :" << dInch << endl;
    }
    void display()
    {
        cout << "using c3= c1.calculate(c2) :" << endl;
        cout << "distance in feet :" << dFeet << endl;
        cout << "enter distance in inch :" << dInch << endl;
    }
};
int main()
{
    Distance c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1.calculate(c2);
    c3.add(c1, c2);
    c3.display();
}