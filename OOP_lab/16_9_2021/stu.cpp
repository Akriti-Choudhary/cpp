#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string n;
    int rollnum;

public:
    void input1()
    {
        cout << "Enter roll number :";
        cin >> rollnum;
        cout << endl;
        cout << "Enter name :";
        cin >> n;
        cout << endl;
    }
    void display1()
    {
        cout << "roll number : " << rollnum << endl;
        cout << "name :" << n << endl;
    }
};
class Result : public student
{
protected:
    int sub1, sub2, sub3, sub4, sub5, total;
    float per;

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
        total = sub1 + sub2 + sub3 + sub5 + sub4;
        per = (total / 5.0);
        cout << "total : " << total;
        cout << endl;
        cout << "Percentage : " << per << "%" << endl;
    }
};
class topper : public student
{
protected:
    

public:
    
};
int main()
{
    Result ob1 ;
    Result obj2 ;
    topper ob;
    ob1.input1();
    ob1.input2();
    ob1.display1();
    ob1.display2();
    return 0;
}