#include <iostream>
using namespace std;
int multiplyByValue(int count);
int multiplyByReference(int &count_ref ,int count);
int main()
{
    int count;
    cout << "Enter an integer: \n";
    cin >> count;
    int &count_ref = count;
    cout << "Value after calling multiplyByValue : \n"
         << multiplyByValue(count) << endl;
    cout << "Value after calling multiplyByReference : \n"
         << multiplyByReference(count_ref ,count) << endl;
}
int multiplyByValue(int count){
    return count * count;
}
int multiplyByReference(int &count_ref ,int count){
    return count_ref * count;
}
