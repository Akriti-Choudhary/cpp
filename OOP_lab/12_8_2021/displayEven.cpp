#include <iostream>
using namespace std;
class displayEven
{
public:
    void dis()
    {
        for (int i = 1; i <= 150; ++i)
        {
            if (i % 2 == 0)
            {
                cout << i <<"\t";
                count++;
            }
            if (count % 6 == 0)
            {
                cout << endl;
            }
        }
    }

private:
    int count = 0;
};

int main()
{
    displayEven d;
    cout << "Even numbers between 1 to 150 :" << endl;
    d.dis();
}