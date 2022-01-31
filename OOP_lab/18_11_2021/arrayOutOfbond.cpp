#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n + 2; i++)
    {
        try
        {
            if (i <= n)
            {
                cout << "Enter the element :";
                cin >> a[i];
            }
            else
                throw i;
        }
        catch (int i)
        {
            cout << "out of bond  exception caught" << endl;
        }
    }
    return 0;
}