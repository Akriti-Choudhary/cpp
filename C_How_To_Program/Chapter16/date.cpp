#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class date
{
public:
    date(int d, int m, int y)
    {
        setm(m);
        setd(d);
        sety(y);
    }
    void setm(int m)
    {
        if (m >= 1 && m <= 12)
        {

            month = m;
        }
        else
            month = 1;
    }
    int getm()
    {
        return month;
    }
    void setd(int d)
    {
        day = d;
    }
    int getd()
    {
        return day;
    }
    void sety(int y)
    {
        year = y;
    }
    int gety()
    {
        return year;
    }
    void displayDate()
    {
        cout << setfill('0') <<setw(2)<<day << "/" <<setfill('0') <<setw(2)<< month << "/" <<setfill('0') <<setw(4)<< year << endl;
    }

private:
    int month;
    int day;
    int year;
};
int main(){
    int day1 ,month1 ,year1;
    cout<<"enter day month and year"<<endl;
    cin>>day1>>month1>>year1;
    date obj1(day1,month1,year1);
    cout<<"Displaying date \n"<<endl;
    obj1.displayDate();
    return 0;
}