#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    int mm, dd, yy;
    cout << "month/day/year" << endl;
    cin >> mm >> dd >> yy;
    Date date1(mm, dd, yy);
    date1.print();
    date1.nextDay();
    date1.print();

} //end main