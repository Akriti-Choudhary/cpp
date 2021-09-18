#include <iostream>
using namespace std;
void swap(int *num1, int *num2);
int main()
{
    int num1, num2;
    cout << "Enter 1st integer :" << endl;
    cin >> num1;
    cout << "Enter 2nd integer :" << endl;
    cin >> num2;
    swap(&num1, &num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    return 0;
}
void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}