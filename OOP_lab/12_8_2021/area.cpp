#include <iostream>

using namespace std;

class A
{
public:
    float area(int height, int base); //area of triangle
    float area(float l, float b);     //area of rectangle
    float area(int h, float r);       //area of cylinder
    float area(int r);                //area of circle
    void output()
    {
        cout << "Result : " << res << endl;
    }

private:
    float res;
};
float A::area(int height, int base)
{
    res = 0.5 * base * height;
}
float A::area(float l, float b)
{
    res = l * b;
}
float A::area(int h, float r)
{
    res = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
}
float A::area(int r)
{
    res = 3.14 * r * r;
}

int main()
{
    cout << "1: Area of triangle \n2: Area of Rectangle \n3:Area of cylinder \n4: Area of circle " << endl;
    int ch;
    cin >> ch;
    A obj;
    int height, base, radius ;
    float l ,b ,r;
    switch (ch)
    {
    case 1:
        cout << "Enter the (int)height and (int)base" << endl;
        cin >> height >> base;
        obj.area(height, base);
        obj.output();
        break;
    case 2:
        cout << "Enter the (float)length and (float)width" << endl;
        cin >> l >> b;
        obj.area(l, b);
        obj.output();
        break;
    case 3:
        cout << "Enter the (int)height and (float)radius" << endl;
        cin >> height >> r;
        obj.area(height, r);
        obj.output();
        break;
    case 4:
        cout << "Enter the (int)radius" << endl;
        cin >> radius;
        obj.area(radius);
        obj.output();
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}