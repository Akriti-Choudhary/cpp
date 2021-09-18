#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;

public:
    void getdata()
    {
        cout << "Enter name " << endl;
        cin >> name;
        cout << "Enter roll number " << endl;
        cin >> roll;
    }
};

class test : public student
{
protected:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

public:
    void getmark()
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
    void details()
    {
        cout << "\n\nName : " << name << endl
             << " Roll number : " << roll << endl;
        cout << "Marks of subject1 : " << sub1 << endl;
        cout << "Marks of subject2 : " << sub2 << endl;
        cout << "Marks of subject3 : " << sub3 << endl;
        cout << "Marks of subject4 : " << sub4 << endl;
        cout << "Marks of subject5 : " << sub5 << endl;
    }
};

class sports
{
protected:
    int msports;

public:
    void getspo()
    {
        cout << "Enter marks in sports : ";
        cin >> msports;
    }
};

class result : public sports, public test
{
    int total;
    float percent;

public:
    void display()
    {
        cout << "Marks in sports = " << msports << endl;
        total = sub1 + sub2 + sub3 + sub4 + sub5 + msports;
        percent = (total /6.0);
        cout << "Total marks : " << total <<endl<< "Percent = " << percent << endl;
    }
};

int main()
{
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getspo();
    ob1.display();
    ob1.details();
    ob1.display();
}