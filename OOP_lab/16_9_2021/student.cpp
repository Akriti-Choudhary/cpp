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
class Fee : public student
{
protected:
    int F;

public:
    void input3()
    {
        cout << "Enter the fees amount to be paid" << endl;
        cin >> F;
    }
    void receipt()
    {
        if (F == 0)
        {
            cout << "Fees is not paid" << endl;
            cout << "Receipt cannot be generated" << endl;
        }
        else
        {
            cout << "Fees is paid" << endl;
        }
    }
};
int main()
{
    Result ob;
    Fee ob1;
    ob.input1();
    ob.input2();
    ob1.input3();
    ob.display1();
    ob.display2();
    ob1.receipt();
    return 0;
}