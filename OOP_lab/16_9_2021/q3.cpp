#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string n;
    int rollnum;
    int age;

public:
    void input1()
    {
        cout << "Enter roll number :";
        cin >> rollnum;
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
        cout << "roll number : " << rollnum << endl;
        cout << "name :" << n << endl;
        cout << "age :" << age << endl;
    }
};
class test : public student
{
protected:
    int sub1, sub2, sub3, sub4, sub5;

public:
    void input2()
    {
        cout << "Enter marks of subject1 :";
        cin >> sub1;
        cout << endl;
        cout << "Enter marks of subject2 :";
        cin >> sub2;
        cout << endl;
        cout << "Enter marks of subject3 :";
        cin >> sub3;
        cout << endl;
        cout << "Enter marks of subject4 :";
        cin >> sub4;
        cout << endl;
        cout << "Enter marks of subject5 :";
        cin >> sub5;
        cout << endl;
    }
    void display2()
    {
        cout << "Marks of subject1 : " << sub1 << endl;
        cout << "Marks of subject2 : " << sub2 << endl;
        cout << "Marks of subject3 : " << sub3 << endl;
        cout << "Marks of subject4 : " << sub4 << endl;
        cout << "Marks of subject5 : " << sub5 << endl;
    }
};

class result : public test
{
public:
    int total;
    float per;

    void display()
    {
        input1();
        input2();
        total = sub1 + sub2 + sub3 + sub5 + sub4;
        per = (total / 5.0);
        display1();
        display2();
        cout << "total : " << total;
        cout << endl;
        cout << "Percentage : " << per <<"%"<< endl;
    }
};
int main()
{
    result ob;
    ob.display();
    return 0;
}