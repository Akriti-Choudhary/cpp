#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
    string name;
    string designation;
    int empno;

public:
    void input1()
    {
        cout << "Enter employee id :";
        cin >> empno;
        cout << endl;
        cout << "Enter employee name :";
        cin >> name;
        cout << endl;
        cout << "enter designation :";
        cin >> designation;
        cout << endl;
    }

    void display1()
    {
        cout << "employee id :" << empno << endl;
        cout << "employee name :" << name << endl;
        cout << "designation :" << designation << endl;
    }
};
class qualification : public employee
{
protected:
    string ug, pg;
    int exp;

public:
    void input2()
    {
        input1();
        cout << "Enter NA if degree is not completed" << endl;
        cout << "Enter ug course :";
        cin >> ug;
        cout << endl;
        cout << "Enter pg course:";
        cin >> pg;
        cout << endl;
        cout << "enter experience :";
        cin >> exp;
        cout << endl;
    }

    void display2()
    {
        display1();
        cout << "ug course :" << ug << endl;
        cout << "pg course:" << pg << endl;
        cout << "experience(int) :" << exp;
        cout << endl;
    }
};
class salary : public qualification
{
public:
    int sal;
    int incre_sal;
    void input3()
    {

        input2();

        cout << "Enter salary" << endl;
        cin >> sal;
        if (exp)
        {
            incre_sal = sal + 20000;
        }
        else if (pg != "NA")
        {
            incre_sal = sal + 10000;
        }
        else if (ug != "NA")
        {
            incre_sal = sal + 5000;
        }
        else
        {
            incre_sal = sal;
            cout << "No increment in salary" << endl;
        }
    }
    void display3()
    {
        display2();
        cout << "Increment salary :" << incre_sal << endl;
    }
};
int main()
{
    salary obj;
    obj.input3();
    obj.display3();

    return 0;
}