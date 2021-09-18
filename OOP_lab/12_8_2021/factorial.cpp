#include <iostream>
using namespace std;
class factorial
{
    public:
    factorial(int n)
        : a(n)
    {
    }
    int fact(int a);

private:
    int a;
};

int factorial::fact( int a){
    if(a==1 || a==0){
        return 1;    
        }
        else
        return (a*fact(a-1));

}

int main()
{
    int n;
    cout << "Enter the number to calculate factorial " << endl;
    cin >> n;
    factorial num(n);
    cout<<"Result = "<<num.fact(n)<<endl;
}