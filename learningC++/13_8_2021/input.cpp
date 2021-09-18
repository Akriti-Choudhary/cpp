#include <iostream>
using namespace std;

class A
{
    char name[10];
    int count = 0;

public:
    void input(int c)
    {
        if (count < 10)
        {
            name[count] = c;
        }
    }
    void output()
    {
        for (int i = 0; i < 10; ++i)
        {
            cout << name[i] << endl;
        }
    }
};

int main()
{
    A obj;
    char c;
    for (int i = 0; i < 10; ++i)
    {
        cout<<"Enter c : ";
        cin >> c;
        obj.input(c);
    }
    obj.output();
}
