#include <iostream>

using namespace std;
class student
{
private:
    int rollnum;

public:
    void input1()
    {
        cout << "Enter roll number :";
        cin >> rollnum;
        cout << endl;
    }
    void display1()
    {
        cout << "roll number : " << rollnum;
        cout << endl;
    }
};
class test : public student
{
protected:
    int sub1, sub2;

public:
    void input2()
    {
        cout << "Enter marks of subject1 :";
        cin >> sub1;
        cout << endl;
        cout << "Enter marks of subject2 :";
        cin >> sub2;
        cout << endl;
    }
    void display2()
    {
        cout << "Marks of subject1 : " << sub1 << endl;
        cout << "Marks of subject2 : " << sub2 << endl;
    }
};
class result : public test
{
public:
    int total ;

    void cal()
    {
        total = sub1 + sub2;
    }
    void display()
    {
        display1();
        display2();
        cout << "total : " << total;
        cout << endl;
    }
};
int main()
{
    result ob;
    ob.input1();
    ob.input2();
    ob.cal();
    ob.display();
    return 0;
}