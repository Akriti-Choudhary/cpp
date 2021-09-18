#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <math.h>
#include "Enhancing_class_rectangle.h"

rectangle::rectangle(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)
{
    setCoord1(X1, Y1);
    setCoord2(X2, Y2);
    setCoord3(X3, Y3);
    setCoord4(X4, Y4);
}
void rectangle::setCoord1(int X1, int Y1)
{
    if((X1 > 0 && Y1 >0)&&(X1 < 20 && Y1 < 20) ){
    x1 = X1;
    y1 = Y1;
    }
    else{
        throw ("x and y should be in first quad and less than 20 ");
    }
}
void rectangle::setCoord2(int X2, int Y2)
{
    x2 = X2;
    y2 = Y2;
}
void rectangle::setCoord1(int X3, int Y3)
{
    x3 = X3;
    y3 = Y3;
}
void rectangle::setCoord1(int X4, int Y4)
{
    x4 = X4;
    y4 = Y4;
}
