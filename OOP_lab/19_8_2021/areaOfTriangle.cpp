#include <iostream>
#include <iomanip>
using namespace std;
class area
{
public:
    float areaTri(float h = 1.0, float b = 1.0)
    {
        return (0.5 * h * b);
    }
};

int main()
{
    float h, b;
    cout << "enter the height and base of the triangle : " << endl;
    cin >> h;
    cin >> b;

    area obj;
    cout << "Area using default values : " << obj.areaTri() << endl;
    cout << "Area using b as default value and h as actual values : " << obj.areaTri(h) << endl;
    cout << "Area using actual values : " << obj.areaTri(h, b) << endl;
    return 0;
}