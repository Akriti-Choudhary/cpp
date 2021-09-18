#include <iostream>
using namespace std;
class sum
{
public:
    sum()
        : total(0)
    {
    }
    void input()
    {
        cout << "Enter the Number : " << endl;
        cin >> num;
    }
    void calculate();

private:
    int num;
    int total;
};

void sum::calculate()
{
    for (int i = 1; i <= num; ++i)
    {
        total += i;
    }
    cout<<"Total =  "<<total<<endl;
}

int main()
{
    sum obj;
    obj.input();
    obj.calculate();
    return 0;
}