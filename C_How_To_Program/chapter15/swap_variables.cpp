#include <iostream>
using namespace std;
#include "swap.h"
int main()
{
    int value1, value2;

    cout << "Enter two integers values :\n";
    cin >> value1 >> value2;
    swap(value1, value2);

    float value3, value4;
    cout << "\nEnter two floating values :\n";
    cin >> value3 >> value4;
    swap(value3, value4);

    char value5, value6;
    cout << "\nEnter two characters :\n";
    cin >> value5 >> value6;
    swap(value5, value6);
}
