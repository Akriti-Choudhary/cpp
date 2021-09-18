#include <stdio.h>
#include <iostream>
using namespace std;
class dist
{
    int d_feet;
    double d_inch;

public:
    void input()
    {
        cin>>d_feet>>d_inch;
    }

    void add(dist d1,dist d2){
    d_feet = d1.d_feet + d2.d_feet;
    d_inch = d1.d_inch + d2.d_inch;

    while (d_inch >= 12)
    {
        d_inch = d_inch - 12;
        d_feet = d_feet + 1;
    }

    
    }

    void display()
    {
        cout<<"Distance in feet :"<<d_feet<<" \nDistance in feet :"<<d_inch;
    }
};
int main()
{
    dist d1, d2, d3;
        puts("Enter the distance in feet and inch for distance  :");
        d1.input();
        puts("Enter the distance in feet and inch for distance  :");
        d2.input();
        d3.add(d1,d2);
        d3.display();

    return 0;
}