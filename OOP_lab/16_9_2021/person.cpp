#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string n;
    int jersey_no;
    int age;

public:
    void input1()
    {
        cout << "Enter jersey_no :";
        cin >> jersey_no;
        cout << endl;
        cout << "Enter name :";
        cin >> n;
        cout << endl;
        cout << "enter age :";
        cin >> age;
        cout << endl;
    }
    void display1()
    {
        cout << "jersey_no : : " << jersey_no << endl;
        cout << "name :" << n << endl;
        cout << "age :" << age << endl;
    }
};
class baseball : public Person
{

public:
    void display2()
    {
        display1();
    }
};

int main()
{
    baseball ob;
    ob.input1();
    ob.display2();
    return 0;
}