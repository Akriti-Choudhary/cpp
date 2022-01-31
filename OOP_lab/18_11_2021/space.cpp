#include <iostream>
#include <string.h>

#define MAX 50
using namespace std;
int main()
{
    char a[MAX];
    cout << "Enter the string : ";
    cin.getline(a, MAX);

    int l = strlen(a);

    try
    {
        for (int i = 0; i < l; i++)
        {
            try
            {
                if (a[i] == ' ')
                {
                    cout << endl;
                    throw a[i];
                }
                else
                {
                    cout << a[i];
                }
            }
            catch (char c)
            {
                throw;
            }
        }
    }
    catch (char c)
    {
        cout << "Space is caught" << endl;
    }
    return 0;
}