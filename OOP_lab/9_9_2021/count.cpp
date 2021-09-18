#include <iostream>
using namespace std;
class book
{
    static int a;

public:
    book()
    {
        a++;
    }
    static void display()
    {
        cout << "the number of times object is created = " << book::a << endl;
    }
};
int book ::a;
int main()
{
    book obj1, obj2, obj3, obj4, obj5;
    obj1.display();

    return 0;
}