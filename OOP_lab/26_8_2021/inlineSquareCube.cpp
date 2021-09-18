#include <iostream>
using namespace std;
class cal
{
public:
    inline int square(int n);
    inline int cube(int n);
};
int cal::square(int n)
{
    return n * n;
}
int cal::cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cal obj;
    cout << "Square of " << n << " = " << obj.square(n) << endl;
    cout << "Cube of " << n << " = " << obj.cube(n) << endl;
    return 0;
}