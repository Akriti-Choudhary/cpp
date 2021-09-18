#include <iostream>
using namespace std;

class value
{
public:
    int fun(int n);
};

int value::fun(int n){
    return ++n;
}

int main()
{
    value obj;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Incremented value = " << obj.fun(n) << endl;
    return 0;
}