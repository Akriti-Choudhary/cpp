#ifndef ENHANCING_CLASS_RECTANGLE_H
#define ENHANCING_CLASS_RECTANGLE_H
class rectangle
{
public:
    explicit rectangle(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
    void setCoord1(int X1, int Y1);
    void setCoord2(int X2, int Y2);
    void setCoord3(int X3, int Y3);
    void setCoord4(int X4, int Y4);

    int lengthWidth();  //to calculate the length and width of the quad 
    int perimeter();
    int area();

private:
    int x1 ,x2, x3, x4;
    int y1 ,y2, y3, y4;
    float l;
    float b;

    
};
#endif