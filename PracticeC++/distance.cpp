#include <iostream>
#include <math.h>
using namespace std;
class Distance
{
    int x;
    int y;

public:
    void input()
    {
        cout << "enter x" << endl;
        cin >> x;
        cout << "enter y" << endl;
        cin >> y;
    }
    float calculate(Distance point2)
    {
        return sqrt((x - point2.x) * (x - point2.x) + (y - point2.y) * (y - point2.y)) ;
    }
};
int main()
{
    Distance point1;
    Distance point2;

    cout << "Enter the coordinates of point1 :" << endl;
    point1.input();
    cout << "Enter the coordinates of point2 :" << endl;
    point2.input();

    cout << "Distance between point1 and point2 :" << point1.calculate(point2)<<endl;
}