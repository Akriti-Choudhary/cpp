#include <iostream>
using namespace std;
template <class T>
void swap_num(T &value_x, T &value_y)
{
    T temp;
    temp = value_x;
    value_x = value_y;
    value_y = temp;
}
int main()
{
    int value1, value2;

    cout << "Enter two integers values :\n";
    cin >> value1 >> value2;
    cout << "After swap \n";
    swap_num(value1, value2);
    cout << "Value1 :" << value1 << "\nvalue2 :" << value2 << endl;

    float value3, value4;
    cout << "\nEnter two floating values :\n";
    cin >> value3 >> value4;
    cout << "After swap \n";
    swap_num(value3, value4);
    cout << "Value3 :" << value3 << "\nvalue4 :" << value4 << endl;

    char value5, value6;
    cout << "\nEnter two characters :\n";
    cin >> value5 >> value6;
    cout << "After swap \n";
    swap_num(value5, value6);
    cout << "Value5 :" << value5 << "\nvalue6 :" << value6 << endl;
}
