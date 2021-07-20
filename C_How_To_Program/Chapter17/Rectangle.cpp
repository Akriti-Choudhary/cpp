#include <iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle(float l = 1, float w = 1)
    {
        setLength(l);
        setWidth(w);
    }
    void setLength(float l)
    {
        if (l > 0.0 && l < 20.0)
        {
            length = l;
        }
        else
        {
            throw invalid_argument("Length should be between 0.0 - 20.0 both values excluded");
        }
    }
    void setWidth(float w)
    {
        if (w > 0.0 && w < 20.0)
        {
            width = w;
        }
        else
        {
            throw invalid_argument("Width should be between 0.0 - 20.0 both values excluded");
        }
    }
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    float area()
    {
        return (getLength() * getWidth());
    }
        float perimeter()
    {
        return (2 * (getLength() + getWidth()));
    }

private:
    float length, width;
};

int main(){
    float len , wid;
    cout<<"Enter the length of rectangle :"<<endl;
    cin>>len;
    cout<<"Enter the width of rectangle :"<<endl;
    cin>>wid;
    Rectangle obj1(len,wid);
    cout<<"Area of rectangle :"<< obj1.area()<<endl;
    cout<<"Perimeter of rectangle :"<< obj1.perimeter()<<endl;

    return 0;

}