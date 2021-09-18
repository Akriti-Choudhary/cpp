#include <iostream>
using namespace std;
int a = 10;
class A
{
public:
    static int a;
    // void display(){
    //     cout<<"Static a = "<<a<<endl;
    // }
};
int A::a = 20;

main()
{
    A ob;
    int a = 30;
    cout<<"Local a = "<<a<<endl;
    cout<<"Global a = "<<::a<<endl;
    cout<<"Static a = "<<A::a<<endl;

    //ob.display();
}