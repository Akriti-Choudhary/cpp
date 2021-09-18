#include <iostream>
using namespace std;
class B;
class C;
class A
{
    int arr1[5];

public:
    void input()
    {
        for (int i = 0; i < 5; ++i)
        {
            cin >> arr1[i];
        }
    }
    friend C add(A, B, C);
};
class B
{
    int arr2[5] = {10, 20, 30, 40, 50};

public:
    void input()
    {
        for (int i = 0; i < 5; ++i)
        {
            cin >> arr2[i];
        }
    }
    friend C add(A, B, C);
};
class C
{
    int arr3[5] = {0, 0};
    friend C add(A, B, C);

public:
    void display()
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << arr3[i] << endl;
        }
    }
};
C add(A obj1, B obj2, C obj3)
{
    for (int i = 0; i < 5; ++i)
    {
        obj3.arr3[i] = obj1.arr1[i] + obj2.arr2[i];
    }
    return obj3;
}
int main()
{
    A obj1;
    B obj2;
    C obj3;
    cout<<"Enter elements of 1st array"<<endl;
    obj1.input();
    cout<<"Enter elements of 2nd array"<<endl;
    obj2.input();
    obj3 = add(obj1, obj2, obj3);
    cout<<"Sum of array elements"<<endl;
    obj3.display();
    return 0;
}