#include <iostream>

using namespace std;
class Time
{
    int h;
    int m;

public:
    Time()
    {
        h = 0;
        m = 0;
    }

    Time(int hh, int mm)
    {
        h = hh;
        m = mm;
    }
    void operator=(Time obj1)
    {
        h = obj1.h;
        m = obj1.m;
    }
    void display()
    {
        cout << "hours : " << h << " minutes : " << m << "\n";
    }
    friend void operator==(Time obj1, Time obj2);
    friend Time operator+(Time obj1, Time obj2);
};

void operator==(Time obj1, Time obj2)
{
    if (obj1.h == obj2.h && obj1.m == obj2.m)
    {
        cout << "Equal\n";
    }
    else
    {
        cout << "Unequal\n";
    }
}
Time operator+(Time obj1, Time obj2)
{
    Time obj;
    obj.h = obj1.h + obj2.h;
    obj.m = obj1.m + obj2.m;
    if (obj.m >= 60)
    {
        obj.h += 1;
        obj.m -= 60;
    }
    return obj;
}
int main()
{
    int h1, m1, h2, m2;
    Time obj;

    cout << "Enter time1 in hours and minutes\n";
    cin >> h1 >> m1;

    cout << "Enter time2 in hours and minutes\n";
    cin >> h2 >> m2;

    Time obj1(h1, m1);
    Time obj2;
    Time obj3(h2, m2);

    cout << "Displaying obj1\n";
    obj1.display();

    cout << "Displaying obj2\n";
    obj2.display();

    cout << "Displaying obj3\n";
    obj3.display();

    cout << "\n";
    cout << "Copying obj3 in obj2\n";
    obj2 = obj3;

    
    cout << "Displaying obj2\n";
    obj2.display();

    cout << "\n";
    cout << "Verifying obj1 == obj2 \n";
    obj1 == obj2;

    cout << "\n";
    obj = obj1 + obj2;
    cout << "Displaying obj1+obj2\n";
    obj.display();

    return 0;
}