#include <iostream>
#include <string>
using namespace std;
class abc
{
    string *s = NULL;

public:
    abc()
    {
        s = new string();
        *s = " ";
    }

    abc(string value)
    {
        s = new string();
        *s = value;
    }

    ~abc()
    {
        free(s);
    }

    friend abc operator+(abc &obj1, abc &obj2);
};

abc operator+ (abc &obj1, abc &obj2)
{
    abc obj;
    (*(obj.s)) = (*(obj1.s)).append(*(obj2.s));
    cout<<"The resulting string is : "<<*(obj.s)<<endl;

    return obj;
}

int main()
{
    string v1, v2;

    cout << "Enter string 1 : \n";
    cin >> v1;

    cout << "Enter string 2 : \n";
    cin >> v2;

    abc obj;
    abc obj1(v1), obj2(v2);

    obj = obj1 + obj2;

    return 0;
}