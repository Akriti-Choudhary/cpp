#include <iostream>
using namespace std;
void swap(class A, class B);
class B;
class A
{
    int num1;

public:
    void input()
    {
        cin >> num1;
    }

    void display()
    {
        cout << "num1 = " << num1 << endl;
    }
    void friend swap(class A, class B);
};
class B
{
    int num2;

public:
    void input()
    {
        cin >> num2;
    }

    void display()
    {
        cout << "num2 = " << num2 << endl;
    }
    void friend swap(class A, class B);
};
void swap(class A obj1, class B obj2)
{
    int temp;
    temp = obj1.num1;
    obj1.num1 = obj2.num2;
    obj2.num2 = temp;
}
int main()
{
    A obj1;
    B obj2;
    cout << "Enter the 1st number" << endl;
    obj1.input();
    cout << "Enter the 2nd number" << endl;
    obj2.input();
    swap(obj1, obj2);
    obj1.display();
    obj2.display();
    return 0;
}