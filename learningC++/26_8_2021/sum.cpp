#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void input()
    {
        cout << "Enter num1 :";
        cin >> a;
        cout << endl;
    }
    friend int sum(A &, B &);
};
class B
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter num2 :";
        cin >> b;
        cout << endl;
    }
    friend int sum(A &, B &);
};
int sum(A &obj1, B &obj2)
{
    return obj1.a + obj2.b;
}

int main()
{
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    cout << "Sum : " << sum(obj1, obj2) << endl;
    return 0;
}