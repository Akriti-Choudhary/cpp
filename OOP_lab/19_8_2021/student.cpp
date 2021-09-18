#include <iostream>

using namespace std;
class student
{
public:
    student(int yA, int yP)
        : yearOfAdmission(yA), yearOfPassout(yP)
    {
    }
    float avgMarks(int marks[], int n);
    void display(int n);

private:
    int yearOfAdmission;
    int yearOfPassout;
    int avg;
};
float student::avgMarks(int marks[], int n)
{
    int sum = 0;
    cout << "Enter the marks of " << n << " subjects :" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "marks of subject " << i + 1 << " ";
        cin >> marks[i];
        sum += marks[i];
    }
    avg = sum / n;
}
void student::display(int n)
{
    cout << endl;
    cout << "Displaying student details :" << endl;
    cout << "year Of Admission : " << yearOfAdmission << endl;
    cout << "year Of Passout : " << yearOfPassout << endl;
    cout << "Number of subjects : " << n << endl;
    cout << "Average marks : " << avg << endl;
}
int main()
{
    int yA;
    int yP;
    int n;
    cout << "enter year Of Admission : ";
    cin >> yA;

    cout << "year Of Passout : ";
    cin >> yP;

    cout << "Enter Number of subjects : ";
    cin >> n;
    int marks[n];
    student obj(yA, yP);
    obj.avgMarks(marks,n);
    obj.display(n);
    return 0;
}