#include <iostream>
using namespace std;
template <class Ty>
void swap(Ty value_x ,Ty value_y){
    Ty temp;
    temp = value_x;
    value_x = value_y;
    value_y = temp;
    cout<<"Value1 :"<<value_x<<"\nvalue2 :"<<value_y<<endl;
}