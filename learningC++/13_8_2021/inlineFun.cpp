#include <iostream>
using namespace std;
class multi
{
public:
    multi(int p, int t)
        : P(p), T(t)
    {
    }
    inline float calculate( );

private:
    int P;
    int T;
};

inline float multi::calculate( )
{
    return (P * T);
}

int main()
{
    int p, t;
    cout << "Enter two num :" << endl;
    cin >> p >> t;
    //default argument
    multi obj(p, t);
    cout << "Result:" << obj.calculate() << endl;
}