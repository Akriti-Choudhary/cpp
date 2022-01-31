#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x == 0)
        throw x;
    }
    catch(int y)
    {
        cout<<"caught int\n";
    }
    try
    {
        if(x == 0)
        throw 1.0;
    }
    catch(float z)
    {
        cout<<"caught float\n";
    }
    try
    {
        if(x == 0)
        throw 'x';
    }
    catch(char a)
    {
        cout<<"caught char\n";
    }
}
int main()
{
    int x;

    cout << "Enter x" << endl;
    cin >> x;
    test(x);
    return 0;
}