#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
class data
{
private:
    T n;

public:
    data()
    {
        n = 0;
    }
    data(T x)
    {
        n = x;
    }
    T reve(T x)
    {
        string num = x;
        reverse(num.begin(), num.end());
        return num;
    }
};
int main()
{
    int x;
    cout << "Enter the (int)number to be reversed : \n";
    cin >> x;
    data<int> obj(x);
    cout << obj.reve(x);

    string y;
    cout << "Enter the string to be reversed : \n";
    cin >> y;
    data<string> obj1(y);
    cout << obj1.reve(y);

    return 0;
}