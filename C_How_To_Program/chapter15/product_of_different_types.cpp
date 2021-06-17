#include <iostream>
using namespace std;
#include "product.h"
int main(){
    int value1,value2;
    cout<<"Enter two integers values :\n";
    cin>>value1>>value2;
    cout<<"Product = "<<product(value1,value2);
    float value3,value4;
    cout<<"\nEnter two floating values :\n";
    cin>>value3>>value4;
    cout<<"Product = "<<product(value3,value4);

}
