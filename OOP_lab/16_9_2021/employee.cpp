#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
    string n;
    int id;
    int age;
    int salary;

public:
    void input1()
    {
        cout << "Enter employee id :";
        cin >> id;
        cout << endl;
        cout << "Enter employee name :";
        cin >> n;
        cout << endl;
        cout << "enter age :";
        cin >> age;
        cout << endl;
        cout << "enter salary :";
        cin >> salary;
        cout << endl;
    }
   
};
class test : public employee
{

public:
  
    void display()
    {
        cout << "employee id :"<< id<<endl;
        cout << "employee name :"<< n<<endl;
        cout << "age :"<<age<<endl;
        cout << "salary :"<< salary << endl;

    }
};

int main()
{
    test ob1 , ob2 , ob3 , ob4 , ob5;
    ob1.input1();
    ob2.input1();
    ob3.input1();
    ob4.input1();
    ob5.input1();
    
    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();
    ob5.display();

    return 0;
}