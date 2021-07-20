#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y)
    : month(m), day(d), year(y)
{
    if(day > 30){
        throw invalid_argument("Day should be between 1-30");
    }
    if(month > 12){
        throw invalid_argument("Month should be between 1-12");
    }

} //end constructor Date
void Date::print()
{
    cout << month << '/' << day << '/' << year << endl;
} //end function print
void Date::nextDay()
{
    cout<<"Next day : "<<endl;
    ++day;
     (day > 30)?((day = day - 30) &&(month++)):(day = day);
     (month > 12)?((month = month - 12) &&(year++)):(month = month);

}