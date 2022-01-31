#include <iostream>
#include <cstring>
using namespace std;
class Shape
{
public:
    virtual void input()
    {
        cout << "Shape's input called";
    }
    virtual void area()
    {
        cout << "Shape's area";
    }
};
class Circle : public Shape
{
    int radius;

public:
    void input()
    {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }
    void area()
    {
        cout << "\nArea of Circle is:" << 3.14 * radius * radius << endl;
    }
};
class Triangle : public Shape
{
    int b, h;

public:
    void input()
    {
        cout << "Enter base of triangle: ";
        cin >> b;
        cout << "Enter height of triangle: ";
        cin >> h;
    }
    void area()
    {
        cout << "Area of triangle is: " << 0.5 * h * b << endl;
    }
};
class square : public Shape
{
    int l;

public:
    void input()
    {
        cout << "Enter the side of square : ";
        cin >> l;
    }
    void area()
    {
        cout << "Area of square is: " << l * l << endl;
    }
};
int main()
{
    Shape *p1, *p2, *p3;
    Circle c;
    Triangle t;
    square r;
    p1 = &c;
    p2 = &t;
    p3 = &r;
    p1->input();
    p2->input();
    p3->input();
    p1->area();
    p2->area();
    p3->area();
}