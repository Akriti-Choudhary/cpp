#include <iostream>
using namespace std;
class SI
{
public:
    SI(int p, int t)
        : P(p), T(t)
    {
    }
    SI(int p, int t, int r)
        : P(p), T(t), R(r)
    {
    }
    float calculate(int P, int T, int R = 5);

private:
    int P;
    int R;
    int T;
};

float SI:: calculate(int P, int T, int R)
    {
        return ((P * R * T) / 100);
    }

int main()
{

    int p, r, t;
    cout << "Enter principal amount , time , rate" << endl;
    cin >> p >> r >> t;
    //default argument
    SI obj(p, t);
    cout<<"Default value of rate:"<<obj.calculate(p, t)<<endl;

    SI obj1(p, t, r);
    cout<<"Without Default value of rate:"<<obj.calculate(p, t, r)<<endl;
}