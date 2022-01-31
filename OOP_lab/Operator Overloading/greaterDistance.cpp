#include <iostream>

using namespace std;

class Distance
{
    int distKm;
    int distM;

public:
    Distance()
    {
        distKm = 0;
        distM = 0;
    }

    Distance(int km, int m)
    {
        distKm = km;
        if (m < 1000)
        {
            distM = m;
        }
        else
        {
            distM = 0;
        }
    }

    void display()
    {
        cout << distKm << " km " << distM << " m \n";
    }

    friend Distance operator+(Distance obj1, Distance obj2);
    friend Distance operator>(Distance obj1, Distance obj2);
    friend int operator==(Distance obj1, Distance obj2);
};

Distance operator+(Distance obj1, Distance obj2)
{
    Distance obj;
    obj.distKm = obj1.distKm + obj2.distKm;
    obj.distM = obj1.distM + obj2.distM;
    if (obj.distM > 1000)
    {
        obj.distM -= 1000;
        obj.distKm += 1;
    }
    return obj;
}

Distance operator>(Distance obj1, Distance obj2)
{
    if (obj1.distKm > obj2.distKm)
    {
        return obj1;
    }
    else if (obj1.distM > obj2.distM)
    {
        return obj1;
    }
    else
    {
        return obj2;
    }
}

int operator==(Distance obj1, Distance obj2)
{
    if ((obj1.distKm == obj2.distKm) && (obj1.distM == obj2.distM))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int km1, m1, km2, m2;

    cout << "Enter the distance1 in km and m(< 1000)\n";
    cin >> km1 >> m1;

    cout << "Enter the distance2 in km and m(< 1000)\n";
    cin >> km2 >> m2;

    Distance obj;
    Distance ob;
    Distance obj1(km1, m1);
    Distance obj2(km2, m2);

    ob = obj1 > obj2;
    cout<<"Displaying the greater value object\n";
    ob.display();
    int p = obj1 == obj2;
    if (p == 1)
    {
        cout << "Distance 1 and Distance 2 are equal\n";
    }
    else
    {
        cout << "Distance 1 and Distance 2 are not equal\n";
    }

    obj = obj1 + obj2;
    cout << "Addition of both the distances = ";
    obj.display();

    return 0;
}