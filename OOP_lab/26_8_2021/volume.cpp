#include <iostream>
#define pi 3.14
using namespace std;
class vol
{
public:
    int volume(int r);
    int volume(int r, int h);
    int volume(int l, int b, int h);
};
int vol::volume(int r)
{
    return 1.33 * pi * r * r * r;
}
int vol::volume(int r, int h)
{
    return pi * r * r * h;
}
int vol::volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    vol v;
    int r, h, l, b;
    int ch;
    cout << "Enter choice:\n1 - volume of sphere\n2 - volume of cylinder\n3 - volume of cuboid";
    cout << "\n-1 to exit\n";
    cin >> ch;
    while (ch != -1)
    {
        switch (ch)
        {
        case 1:
            cout << "Enter the radius of sphere :" << endl;
            cin >> r;
            cout << "Result = " << v.volume(r)<<endl;
            break;
        case 2:
            cout << "Enter the radius and height of cylinder :" << endl;
            cin >> r >> h;
            cout << "Result = " << v.volume(r, h)<<endl;
            break;
        case 3:
            cout << "Enter the l, b and h of cuboid :" << endl;
            cin >> l >> b >> h;
            cout << "Result = " << v.volume(l, b, h)<<endl;
            break;

        default:
            cout << "Wrong choice " << endl;
            break;
        }
        cout << "Enter choice:\n1 - volume of sphere\n2 - volume of cylinder\n3 - volume of cuboid";
        cout << "\n-1 to exit\n";
        cin >> ch;
    }
    cout << "Exit" << endl;
    return 0;
}