#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string n;
    int rollnum;
    int age;
    string section;

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
        cout << "Enter section :";
        cin >> section;
        cout<<endl;

    }
    void display1()
    {
        cout << "roll number : " << rollnum << endl;
        cout << "name :" << n << endl;
        cout << "age :" << age << endl;
        cout << "section :" << section << endl;
    }
};
class marks : public student
{
protected:
    int sub1, sub2, sub3;

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
    }
    void display2()
    {
        cout << "Marks of subject1 : " << sub1 << endl;
        cout << "Marks of subject2 : " << sub2 << endl;
        cout << "Marks of subject2 : " << sub3 << endl;
    }
};
class result : public marks
{
public:
    int total;
    int avg;

    void display()
    {
        input1();
        input2();
        total = sub1 + sub2 + sub3;
        avg = total / 3;
        display1();
        display2();
        cout << "total : " << total;
        cout << endl;
        cout << "Average : " << avg << endl;
    }
};
int main()
{
    result ob;
    ob.display();
    return 0;
}