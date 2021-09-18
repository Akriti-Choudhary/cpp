#include <iostream>
using namespace std;
int value(int a, int b)
{
    cout << "Call by value :" << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
int address(int *c, int *d)
{
    cout << "Call by address :" << endl;
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    
}
int ref(int &a, int &b)
{
    cout << "Call by reference :" << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
int main()
{
    int a = 3, b = 5;
    value(a,b);
    address(&a,&b);
    ref(a ,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}