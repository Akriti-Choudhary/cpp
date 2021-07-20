#include <iostream>
using namespace std;
class complex
{
public:
    complex()
    {

    }
    complex(double real , double img)
    :a(real),b(img)
    {

    }

    complex Add(complex obj1 ,complex obj2){
        complex temp;
        temp.a = obj1.a + obj2.a;
        temp.b = obj1.b + obj2.b;
        return temp;
    }
       complex Subtract(complex obj1 ,complex obj2){
        complex temp;
        temp.a = obj1.a - obj2.a;
        temp.b = obj1.b - obj2.b;
        return temp;
    }
    void display(){
        if(b >=0)
        cout<<a<<" + i"<<b<<endl;
        else
        cout<<a<<" - i"<<(-b)<<endl;

    }

private:
    double a, b; //a is the real part and b is the complex part
};

int main(){
    double a1 ,a2 , b1, b2;
    cout<<"Enter the real part and imaginary part for the 1st object :"<<endl;
    cin>>a1>>b1;
    cout<<"Enter the real part and imaginary part for the 2nd object :"<<endl;
    cin>>a2>>b2;
    complex obj1(a1,b1);
    complex obj2(a2,b2);
    complex obj3;
    cout<<"Addition of the two complex number"<<endl;
    obj3 = obj3.Add(obj1 ,obj2);
    obj3.display();
    cout<<"Subtraction of the two complex number"<<endl;
    obj3 = obj3.Subtract(obj1 ,obj2);
    obj3.display();
    return 0;
}