#include <iostream>
using namespace std;
class book
{
    static int a;
    static void count1()
    {
        c++;
    }
    static void count2()
    {
        d++;
    }

public:
    static int c, d;
    static void input()
    {
        count1();
        cout << "enter an number\n";
        cin >> a;
    }
    static void output()
    {
        count2();
        cout << "the entered number is " << a << "\n";
        ;
    }
};
int book ::c;
int book ::d;
int book ::a;
int main()
{
    book b;
    b.input();
    b.output();
    b.output();
    b.input();
    b.output();
    b.output();
    b.output();
    b.output();
    b.output();
    cout << "The input function is called " << book::c << " times \nThe output function is called " << book::d << " times\n";
    return 0;
}