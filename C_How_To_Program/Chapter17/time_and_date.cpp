
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time_and_date.h"
using namespace std;

TimeDate::TimeDate(int hour, int minute, int second, int m, int d, int y)
    : month(m), day(d), year(y)
{
    if (day > 30)
    {
        throw invalid_argument("Day should be between 1-30");
    }
    if (month > 12)
    {
        throw invalid_argument("Month should be between 1-12");
    }
    setTime(hour, minute, second); //validate and set time
}
void TimeDate::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void TimeDate::setHour(int h)
{
    if (h >= 0 && h < 24)
        hour = h;
    else
    {
        hour = h;
        hour = hour - 24;
        nextDay();
    }
}
void TimeDate::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        minute = m;
        minute = minute - 60;
        setHour(hour + 1);
    }
}
//set second value
void TimeDate::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        second = s;
        second = second - 60;
        setMinute(minute + 1);
    }
} //end function setSecond
//return hour value
unsigned int TimeDate::getHour() const
{
    return hour;
}
//return minute value
unsigned int TimeDate::getMinute() const
{
    return minute;
}
//return second value
unsigned int TimeDate::getSecond() const
{
    return second;
}
void TimeDate ::tick()
{
    setSecond(second + 1);
    printStandard();
    cout << endl;
}
void TimeDate::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}
void TimeDate::printStandard() const
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0')
         << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

void TimeDate::print()
{
    cout << month << '/' << day << '/' << year << endl;
} //end function print
void TimeDate::nextDay()
{
    ++day;
    (day > 30) ? ((day = day - 30) && (month++)) : (day = day);
    (month > 12) ? ((month = month - 12) && (year++)) : (month = month);
}