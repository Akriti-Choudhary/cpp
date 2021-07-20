#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "EnhancingClass_time.h"
using namespace std;

Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second); //validate and set time
}
void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    if (h >= 0)
        hour = h;
    else
    {
        throw invalid_argument("Hour must be 0 - 23");
    }
}
void Time::setMinute(int m)
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
void Time::setSecond(int s)
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
unsigned int Time::getHour() const
{
    return hour;
}
//return minute value
unsigned int Time::getMinute() const
{
    return minute;
}
//return second value
unsigned int Time::getSecond() const
{
    return second;
}
void Time ::tick()
{
    setSecond(second + 1);
    printStandard();
    cout << endl;
}
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}
void Time::printStandard() const
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0')
         << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}