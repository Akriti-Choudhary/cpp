#include <iostream>

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
        T rem;
        T num = x;
        T revNum = 0;

        while (num != 0)
        {
            rem = num % 10;
            revNum = (revNum * 10) + rem;
            num = num / 10;
        }

        return revNum;
    }
};
int main()
{
    int x;
    cout << "Enter the (int)number to be reversed : \n";
    cin >> x;
    data<int> obj(x);
    cout << obj.reve(x);

    return 0;
}