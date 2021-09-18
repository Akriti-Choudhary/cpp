#include <iostream>
#include <string>
using namespace std;
class B;
class C;
class A
{
public:
    string *a = new string();
    void input()
    {
        cout << "Enter 1st string :" << endl;
        cin >> *a;
    }
    friend class C;
    void remove()
    {
        delete (a);
        cout << "dynamic memory is freed" << endl;
    }
};
class B
{
public:
    string *b = new string();
    friend class C;
    void input()
    {
        cout << "Enter 2nd string :" << endl;
        cin >> *b;
    }
    void remove()
    {
        delete (b);
        cout << "dynamic memory is freed" << endl;
    }
};
class C
{
public:
    string *c = new string();
    void merge(A obj1, B obj2)
    {
        *c = (*(obj1.a)).append(*(obj2.b));
    }
    void display()
    {
        cout << "new string : " << *c << endl;
    }
    void remove()
    {
        delete (c);
        cout << "dynamic memory is freed" << endl;
    }
};
int main()
{
    A obj1;
    obj1.input();
    B obj2;
    obj2.input();
    C obj3;
    obj3.merge(obj1, obj2);
    obj3.display();
    obj1.remove();
    obj2.remove();
    obj3.remove();
    return 0;
}