#include <iostream>
using namespace std;
template <class T1, class T2>
class data
{
public:
    T1 num1;
    T2 num2;
    data(T1 a, T2 b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << num1 << " \t" << num2;
    }
};
int main()
{
    data<double, string> ob1(1.89, "Akriti");
    data<char, int> ob2('A', 108);

    cout << "\nDisplaying the first set \n";
    ob1.display();

    cout << "\nDisplaying the second set \n";
    ob2.display();

    return 0;
}