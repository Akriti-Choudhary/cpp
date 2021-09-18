#include <iostream>
using namespace std;
class ch
{
public:
    void display(char c = '*', int n = 80);
};
void ch::display(char c, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << c << " ";
        if (i % 7 == 0)
            cout << endl;
    }
    cout << endl;
}
int main()
{
    char cha;
    int num;
    ch obj;
    int n;
    cout << "Printing 80 times using default argument with default value of n and ch:" << endl;
    obj.display();
    cout << "Enter the character :";
    cin >> cha;
    cout << "Printing using function overloading with default value of n :" << endl;
    obj.display(cha);
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Enter the character :";
    cin >> cha;
    cout << "Printing using function overloading :" << endl;
    obj.display(cha, n);
    return 0;
}