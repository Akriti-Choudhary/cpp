#include <iostream>
#include <string>

using namespace std;

struct employee
{
    int id;
    string name;
    int age;
    double basicSal;
    double grossSal;
};

void input(struct employee *s)
{

    cout << "Enter the name of the employee : ";
    cin >> s->name;
    cout << endl;

    cout << "Enter the employee id : ";
    cin >> s->id;
    cout << endl;

    cout << "Enter the employee age : ";
    cin >> s->age;
    cout << endl;

    cout << "Enter the employee basic salary : ";
    cin >> s->basicSal;
    cout << endl;
}

void calculate(struct employee *s)
{
    double DA , HRA ;
    DA = 0.8 * s->basicSal;
    HRA = 0.1 * s->basicSal;
    s->grossSal = s->basicSal + DA + HRA;
}

void display(struct employee *s){

    cout<< s->name <<" "<< s->id<<" "<< s->age<<" "<< s->basicSal<<" "<<s->grossSal<<endl;
}


int main()
{

    int n;
    cout << "Enter the number of employees : ";
    cin >> n;
    cout << endl;
    struct employee arr[n];
    for (int i = 0; i < n; ++i)
    {
        input(&arr[i]);
        calculate(&arr[i]);
    }
    cout<<"Displaying the details of the employees :"<<endl;

    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"Name "<<"ID "<<"Age "<<"Basic Salary "<<"Gross Salary"<<endl;
    for (int i = 0; i < n; ++i)
    {
        display(&arr[i]);
    }
    cout<<"-----------------------------------------------------------------------"<<endl;

}