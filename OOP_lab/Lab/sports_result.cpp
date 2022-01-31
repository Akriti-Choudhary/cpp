#include <iostream>
#include <numeric>

using namespace std;

class student
{
private:
    string name;
    unsigned int roll_num;
    unsigned int age;

public:
    student()
    {
        name = " ";
        roll_num = 0;
        age = 0;
    }
    student(string n, int r, int a)
    {
        name = n;
        roll_num = r;
        age = a;
    }
    void displaySt()
    {
        cout << "Name : " << name << "\n";
        cout << "Roll number : " << roll_num << "\n";
        cout << "Age : " << age << "\n";
    }
};

class Test
{
public:
    int marks[5];

    Test()
    {
    }
    void input( )
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << "Enter marks of subject " << i + 1 << "\n";
            cin >> marks[i];
        }
    }
    void displayTest()
    {
        cout << "marks of subject1 = " << marks[0] << "\n";
        cout << "marks of subject2 = " << marks[1] << "\n";
        cout << "marks of subject3 = " << marks[2] << "\n";
        cout << "marks of subject4 = " << marks[3] << "\n";
        cout << "marks of subject5 = " << marks[4] << "\n";
    }
};

class Sports
{
public:
    int sportsMarks;

    Sports()
    {
        sportsMarks = 0;
    }
    Sports(int s)
    {
        sportsMarks = s;
    }
    void displaySports()
    {
        cout << "marks of sports : " << sportsMarks << "\n";
    }
};

class Result : public student, public Test, public Sports
{
public:
    unsigned int total;
    float percent;
    Result() : student(), Sports(), Test()
    {
        total = 0;
        percent = 0.0;
    }
    Result(string n, int r, int a, int s)
        : student(n, r, a), Sports(s), Test()
    {
        total = 0;
        percent = 0.0;
        input();
    }
    void sum()
    {
       total = accumulate(marks, marks + 5, total);

        total += sportsMarks;
        percent = total / 6.0;
    }
    void displayRes()
    {
        displaySt();
        displayTest();
        displaySports();
        cout << "Total Marks : " << total << "\n";
        cout << "Percentage : " << percent << "\n";
    }
};
int main()
{
    string n;
    int r, a, s;
    cout << "Enter name :\n";
    cin >> n;
    cout << "Enter roll number :\n";
    cin >> r;
    cout << "Enter age :\n";
    cin >> a;
    cout << "Enter sports marks :\n";
    cin >> s;
    Result obj(n, r, a, s);
    obj.sum();
    obj.displayRes();
    return 0;
}