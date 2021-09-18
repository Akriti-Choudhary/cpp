#include <iostream>
#include <string.h>
using namespace std;
class S2;
class S3;
class S1
{
    string *a = new string;
    friend class S3;

public:
    void input()
    {
        cout << "enter the 1 st string : ";
        cin >> *a;
    }
    void show()
    {
        cout << "1st string  =" << *a << "\n";
    }
};
class S2
{
    string *b = new string;
    friend class S3;

public:
    void input()
    {
        cout << "enter the 2nd string: ";
        cin >> *b;
    }
    void show()
    {
        cout << "2nd string  =" << *b << "\n";
    }
};
class S3
{
    string *c = new string;

public:
    void join(S1 ob1, S2 ob2)
    {
        *c = *ob1.a + *ob2.b;
        delete ob1.a;
        delete ob2.b;
    }
    void show()
    {
        cout << *c << "\n";
        delete c;
    }
};
int main()
{
    S1 ob1;
    S2 ob2;
    S3 ob3;
    ob1.input();
    ob2.input();
    ob1.show();
    ob2.show();
    cout << "final string : " ;
    cout<<endl;
    ob3.join(ob1, ob2);
    ob3.show();
    return 0;
}