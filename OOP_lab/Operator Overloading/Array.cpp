#include <iostream>

using namespace std;

class Array
{
    int arr[5];

public:
    Array()
    {
        for (int i = 0; i < 5; ++i)
        {
            arr[i] = 0;
        }
    }
    friend istream &operator>>(istream &, Array &);
    friend ostream &operator<<(ostream &, Array &);
};
istream &operator>>(istream &cin, Array &ob)
{
    int value = 0;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter the element\n";
        cin >> value;
        ob.arr[i] = value;
    }
    return cin;
}
ostream &operator<<(ostream &cout, Array &ob)
{

    for (int i = 0; i < 5; ++i)
    {
        cout << ob.arr[i] << " ";
    }
    return cout;
}
int main()
{
    Array ob;
    cout<<"Entering The elements of the object using the overloaded extraction operator\n";
    cin>>ob;
    cout<<"Displaying The elements of the object using the overloaded insertion operator\n";
    cout<<ob;
    return 0;
}