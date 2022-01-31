#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float d;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    try
    {
        if ((a - b) != 0)
        {
            d = c / (a - b);
            cout << "Result = " << d;
        }
        else
        {
            throw(a - b);
        }
    }
    catch (int i)
    {
        cout<<"catch is called \n";
        cout << "Result is infinite because a-b is = " << i;
    }
    return 0;
}