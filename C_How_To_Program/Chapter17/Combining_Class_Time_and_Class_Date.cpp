#include <iostream>
#include <stdexcept>
#include "time_and_date.h"
using namespace std;

int main()
{
    int mm, dd, yy, hr, min, sec;
    cout << "Enter hour/minute/second" << endl;
    cin >> hr >> min >> sec;
    cout << "month/day/year" << endl;
    cin >> mm >> dd >> yy;
    TimeDate t4(hr, min, sec, mm, dd, yy);

    cout << "\n\nt4: Date in the format month/day/year : \n ";
    t4.print();
    cout << "\n\nt4: hour , minute and second specified \n ";
    t4.printUniversal();
    cout << "\n ";
    t4.printStandard();
    cout << endl;
    cout << "printing t4 using tick function" << endl;
    t4.tick();
    // t4.nextDay();
    t4.print();

} //end main