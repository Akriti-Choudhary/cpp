#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    try
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the element "<< " = ";
            cin >> a[i];
            try
            {
                if (a[i] < 0)
                {
                    throw a[i];
                }
            }
            catch (int i)
            {
                throw;
            }
        }
    }
    catch (int i)
    {
        cout << "Negative value is caught" << endl;
    }
    return 0;
}