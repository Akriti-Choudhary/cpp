#include <iostream>
using namespace std;
inline int rectArea(int length, int width);
int main()
{
    int length, width;
    cout << "Enter the length and width of the rectangle: \n";
    cin>>length>>width;
    cout<<"\nArea of the rectangle is : \n"<<rectArea(length , width);
}
inline int rectArea(int length, int width){
    return length * width;
}
