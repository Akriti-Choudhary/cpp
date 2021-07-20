#include <iostream>
#include <stdexcept>
#include "EnhancingClass_time.h"
using namespace std;

int main()
{
    Time t1;
    Time t2(2);
    Time t3(21, 34);
    Time t4(12, 25, 42);

    cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
    t1.printUniversal();
    cout << "\n ";
    t1.printStandard();

    cout << "\n\nt2: hour specified; minute and second defaulted\n ";
    t2.printUniversal();
    cout << "\n ";
    t3.printStandard();

    cout << "\n\nt3: hour and minute specified;second defaulted\n ";
    t3.printUniversal();
    cout << "\n ";
    t3.printStandard();

    cout << "\n\nt4: hour , minute and second specified \n ";
    t4.printUniversal();
    cout << "\n ";
    t4.printStandard();

    cout << "\n ";
    cout << endl;
    cout << "printing t4 using tick function" << endl;
    t4.tick();
}