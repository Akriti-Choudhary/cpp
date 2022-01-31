#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int p, int q)
    {
        a = p;
        b = q;
    }

    void display()
    {
        if (b >= 0)
        {
            cout << a << " "
                 << "+ i" << b << "\n";
        }
        else
        {
            cout << a << " "
                 << "- i" << -b << "\n";
        }
    }

    Complex operator++(int)
    {
        Complex obj;
        obj.a = a++;
        obj.b = b++;
        return obj;
    }

    Complex operator++()
    {
        Complex obj;
        obj.a = ++a;
        obj.b = ++b;
        return obj;
    }

    friend Complex operator+(Complex obj1, Complex obj2);
};
Complex operator+(Complex obj1, Complex obj2)
{
    Complex obj;
    obj.a = obj1.a + obj2.a;
    obj.b = obj1.b + obj2.b;

    return obj;
}

int main()
{
    int a1, b1;
    int a2, b2;

    cout << "Enter the real part of complex number1 :";
    cin >> a1;
    cout << "Enter the imaginary part of complex number1 :";
    cin >> b1;

    cout << "Enter the real part of complex number2 :";
    cin >> a2;
    cout << "Enter the imaginary part of complex number2 :";
    cin >> b2;

    Complex obj1(a1, b1), obj2(a2, b2);
    Complex obj , obj3 , obj4;

    obj = obj1 + obj2;

    obj.display();

    cout << "Displaying obj++ \n";
    obj3 = obj++;
    obj3.display();

    cout << "Displaying ++obj \n";
    obj4 = ++obj;
    obj4.display();
    
    return 0;
}