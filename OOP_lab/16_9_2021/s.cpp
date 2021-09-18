#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    char name[20];
    int rollno;
    int percentage;
    void getdata()
    {
        cout << "\nenter the name of the student";
        cin >> name;
        cout << "\nenter the roll no.";
        cin >> rollno;
        cout << "\nenter the percentage of the student";
        cin >> percentage;
    }
};
class topper : public student
{
public:
    void display()
    {
        cout << "\nname:" << name;
        cout << "\nroll no.:" << rollno;
        cout << "\npercentage:" << percentage;
    }
};
int main()
{
    int j, k, l, i, n;
    cout << "enter the number of students" << endl;
    cin >> n;
    student s[n];
    for (i = 0; i < n; i++)
        s[i].getdata();
    for (i = 0; i < n; i++)
    {
        if (s[i].percentage > s[i + 1].percentage)
            j = i;
    }
    topper t[3];
    strcpy(t[0].name, s[j].name);
    t[0].rollno = s[j].rollno;
    t[0].percentage = s[j].percentage;
    for (i = 0; i < n; i++)
    {
        if ((s[i].percentage > s[i + 1].percentage) && i != j)
            k = i;
    }
    strcpy(t[1].name, s[k].name);
    t[1].rollno = s[k].rollno;
    t[1].percentage = s[k].percentage;
    for (i = 0; i < n; i++)
    {
        if ((s[i].percentage > s[i + 1].percentage) && i != j && i != k)
            l = i;
    }
    strcpy(t[2].name, s[l].name);
    t[2].rollno = s[l].rollno;
    t[2].percentage = s[l].percentage;
    cout << "the top 3 scorers are:\n";
    for (i = 0; i < 3; i++)
        t[i].display();
}