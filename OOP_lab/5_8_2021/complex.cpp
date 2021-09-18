#include <iostream>

using namespace std;
class complex
{
public:
    int real;
    int img;

    void input()
    {
        cout << "Enter real part : " << endl;
        cin >> real;
        cout << "Enter imaginary part :" << endl;
        cin >> img;
    }

    void display()
    {
        if (img > 0)
        {
            cout << real << " + i" << img << endl;
        }
        else
            cout << real << " - i" << -img << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of complex numbers to be entered :" << endl;
    cin >> n;
    complex arr[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the " << i + 1 << " complex number :" << endl;
        arr[i].input();
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i].display();
    }
    return 0;
}