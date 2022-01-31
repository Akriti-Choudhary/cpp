#include <iostream>
using namespace std;

template <class T, class U>
void display(T a, U b)
{
    cout << a << "\t" << b << endl;
}

int main()
{
    
    cout<<"\nDisplaying the first set \n";
    display(1.89, "Akriti");

    cout<<"\nDisplaying the second set \n";
    display('A', 108);

    return 0;
}