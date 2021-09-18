/*Name - Akriti Choudhary
  Roll num - 2005776
  Class - B14 
  Question - WAP to perform addition of two complex nos. using friend function and
  the concept of returning object*/

#include <iostream>
using namespace std;
class A
{
    int real;
    int img;

public:
    void input()
    {
        cout << "enter real part :" << endl;
        cin >> real;
        cout << "enter imaginary part :" << endl;
        cin >> img;
    }
    void display()
    {
        if (img >= 0)
            cout << real << " + i" << img;
        else
            cout << real << " - i" << -(img);
    }
    friend A add(A, A);
};

A add(A obj1, A obj2)
{
    A obj3;
    obj3.real = obj1.real + obj2.real;
    obj3.img = obj1.img + obj2.img;

    return obj3;
}
int main()
{
    A obj1;
    A obj2;
    A obj3;
    cout << "Enter 1st complex number" << endl;
    obj1.input();
    cout << "Enter 2nd complex number" << endl;
    obj2.input();
    obj3 = add(obj1, obj2);
    cout << "Sum of complex numbers : " << endl;
    obj3.display();
    return 0;
}