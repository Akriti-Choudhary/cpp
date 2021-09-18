#include <iostream>
#include <iomanip>
using namespace std;
class area
{
public:
    inline float areaCube(float a)
    {
        return (6 * a * a);
    }
};

int main()
{
    float a;
    cout << "enter the side of a cube : ";
    cin >> a;

    area obj;
    cout << "Surface Area : " << obj.areaCube(a) << endl;
    return 0;
}