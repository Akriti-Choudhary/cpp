#include <iostream>
#include <math.h>

using namespace std;

int perfectsq(int a)
{
    if (ceil((double)sqrt(a)) == floor((double)sqrt(a)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int res = 0;
    int i = n;
    while (res != 1)
    {
        ++i;
        res = perfectsq(i);
        if (res == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}