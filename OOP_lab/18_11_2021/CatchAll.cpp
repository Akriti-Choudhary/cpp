#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x > 0)
            throw x;
        else
            throw 'x';
    }
    catch (int x)
    {
        cout << "An integer is caught " << endl;
    }
    catch (char x)
    {
        cout << "A character is caught" << endl;
    }
}

int main()
{
    test(27);
    test(0);

    return 0;
}