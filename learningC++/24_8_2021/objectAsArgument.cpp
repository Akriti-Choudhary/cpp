#include <iostream>

using namespace std;

class S
{
    int a , sum;
    public:
    void input(int P){
        a = P;
    }
    void display(S , S);
};
void S::display(S obj1 , S obj2){
    sum = obj1.a + obj2.a;
    cout<<"sum = "<<sum;
}
int main(){
    S ob1,ob2,ob3;
    ob1.input(5);
    ob2.input(7);
    ob3.display(ob1,ob2);
}