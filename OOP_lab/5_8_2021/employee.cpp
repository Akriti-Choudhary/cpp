#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    int id;
    string name;
    int age;
    double basicSal;
    double grossSal;

public:
    void input()
    {

        cout << "Enter the name of the employee : ";
        cin >> name;
        cout << endl;

        cout << "Enter the employee id : ";
        cin >> id;
        cout << endl;

        cout << "Enter the employee age : ";
        cin >> age;
        cout << endl;

        cout << "Enter the employee basic salary : ";
        cin >> basicSal;
        cout << endl;
    }

    void calculate()
    {
        double DA, HRA;
        DA = 0.8 * basicSal;
        HRA = 0.1 * basicSal;
        grossSal = basicSal + DA + HRA;
    }

    void display()
    {

        cout << name << " \t" << id << " \t" << age << " \t" << basicSal << " \t\t" << grossSal << endl;
    }
};

int main()
{

    int n;
    cout << "Enter the number of employees : ";
    cin >> n;
    cout << endl;
    employee arr[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i].input();
        arr[i].calculate();
    }
    cout << "Displaying the details of the employees :" << endl;

    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Name\t"
         << "ID\t"
         << "Age\t"
         << "Basic Salary\t"
         << "Gross Salary" << endl;
    for (int i = 0; i < n; ++i)
    {
        arr[i].display();
    }
    cout << "-----------------------------------------------------------------------" << endl;
}