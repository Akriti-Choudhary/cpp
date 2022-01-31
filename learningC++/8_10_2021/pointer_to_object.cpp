#include <iostream>
using namespace std;
class A
{
    int p;
    float q;

public:
    void input(int x, float y)
    {
        p = x;
        q = y;
    }
    void output()
    {
        cout << p << " " << q << "\n";
    }
};

int main()
{
    A *ptr = new A[2];
    A *d = ptr;
    for (int i = 0; i < 2; ++i)
    {
        int val;
        cout<<"Enter integer\n";
        cin >> val;
        cout<<"Enter float value\n";
        float val2;
        cin >> val2;
        ptr->input(val, val2);
        ptr->output();
    }
}