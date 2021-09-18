#include <iostream>
using namespace std;
class num
{
private:
    int *arr[5];
    int total = 0;

public:
    num()
    {
        cout << "Enter 5 values" << endl;
        for (int i = 0; i < 5; ++i)
        {
            arr[i] = new int;
            input(arr[i]);
        }
        cout << "Dynamic Constructor is called" << endl;
    }
    void input(int *ptr)
    {
        cin >> *ptr;
    }
    int sum();

    ~num()
    {
        for (int i = 0; i < 5; ++i)
        {
            delete (arr[i]);
        }
        cout << "Destructor is called" << endl;
    }
};
int num::sum()
{
    {
        for (int i = 0; i < 5; ++i)
        {
            total += *arr[i];
        }
        return total;
    }
}
int main()
{
    num obj;
    cout << "Total = " << obj.sum() << endl;
    return 0;
}