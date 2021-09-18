#include <iostream>

class distance
{
public:
    int feet;
    int inches;
    distance add(distance c)
    {
        distance temp;
        temp.feet = feet + c.feet;
        temp.inches = inches + c.inches;
        return temp;
    }
};
int main()
{
    distance c1, c2, c3;
    c1.feet = 5;
    c1.inches = 3;
    c2.feet = 10;
    c2.inches = 5;
    c3 = c1.add(c2);
    std::cout << c3.feet << " " << c3.inches << std::endl;
}