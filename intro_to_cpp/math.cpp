#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a ,b ,c;
    cout<<"Enter three numbers : \n";
    cin>>a>>b>>c;
    cout<<"The math functions applied are : \n";
    cout<<"abs() :"<<abs(a)<<endl<<"acos(0) :"<<acos(0)<<endl<<"asin(0) :"<<asin(0)<<endl;
    cout<<"atan(1) :"<<atan(1)<<endl<<"cbrt(a) :"<<cbrt(a)<<endl<<"ceil(a) :"<<ceil(a)<<endl;
    cout<<"cos(0) :"<<cos(0)<<endl<<"cosh(15) :"<<cosh(15)<<endl;
    cout<<"exp(a) :"<<exp(a)<<endl<<"expm1(a) :"<<expm1(a)<<endl;
    cout<<"fabs(a) :"<<fabs(a)<<endl<<"fdim(a,b) :"<<fdim(a,b)<<endl;
    cout<<"floor(a) :"<<floor(a)<<endl<<"hypot(a,b) :"<<hypot(a,b)<<endl;
    cout<<"fma(a ,b ,c) :"<<fma(a ,b ,c)<<endl<<"fmin(a,b) :"<<fmin(a,b)<<endl;
    cout<<"sin(0) :"<<sin(0)<<endl<<"sinh(15) :"<<sinh(15)<<endl;
    cout<<"tan(0) :"<<tan(0)<<endl<<"tanh(15) :"<<tanh(15)<<endl;
    cout<<"fmod(a,b) :"<<fmod(a,b)<<endl<<"pow(a,b) :"<<pow(a,b)<<endl;
    return 0;

}