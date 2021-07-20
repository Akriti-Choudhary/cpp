#include <iostream>
#include <math.h>
using namespace std;
class Rect
{
public:
    Rect(int X1, int X2, int X3, int X4, int Y1, int Y2, int Y3, int Y4)
    {
        set(X1, X2, X3, X4, Y1, Y2, Y3, Y4);
    }
    void set(int X1, int X2, int X3, int X4, int Y1, int Y2, int Y3, int Y4)
    {
    }

private:
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
};