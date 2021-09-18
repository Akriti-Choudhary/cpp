#include <iostream>

using namespace std;

class student1
{
public:
    char name[20];
    int roll;
    int marks[5];
    int total;
    float percent;
};

student1 *input(student1 *s)
{
    cout << "Enter name : " << endl;
    cin >> s->name;
    cout << "Enter roll number :" << endl;
    cin >> s->roll;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter marks of subject" << i + 1 << " : " << endl;
        cin >> s->marks[i];
    }
}

void totPer(student1 *s)
{
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += s->marks[i];
    }
    s->total = sum;
    s->percent = (sum / 500.0) * 100;
}

void display(student1 *s)
{
    cout << "name :" << s->name << endl;
    cout << "roll number :" << s->roll << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "marks of subject" << i + 1 << " : " << s->marks[i] << endl;
    }
    cout << "Total marks :" << s->total << endl;
    cout << "Percentage :" << s->percent << "%" << endl;
}

int main()
{
    int n;
    cout << "Enter number of students" << endl;
    cin >> n;
    student1 arr[n];

    for (int i = 0; i < n; ++i)
    {
        cout << endl;
        input(&arr[i]);
        totPer(&arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        display(&arr[i]);
        cout << endl;
    }

    return 0;
}