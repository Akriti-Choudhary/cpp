#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int empid;
    int salary;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Emp. Id: ";
        cin >> empid;
    }
};
class Regular : public Employee
{
protected:
    int da, hra, bsal;

public:
    void reg()
    {
        cout << "enter the basic salary, da and hra";
        cin >> bsal >> da >> hra;
    }
    void cal()
    {
        salary = bsal + da + hra;
        cout << "salary of a regular employee is" << salary << endl;
    }
};
class parttime : public Employee
{
protected:
    int hrs, payperhr;

public:
    void part()
    {
        cout << "enter the hours worked and the payper hour";
        cin >> hrs >> payperhr;
    }
    void cal()
    {
        salary = hrs * payperhr;
        cout << "salary of a part-time employee is" << salary << endl;
    }
};
int main()
{
    Regular r;
    parttime p;
    r.input();
    r.reg();
    r.cal();
    p.input();
    p.part();
    p.cal();
}