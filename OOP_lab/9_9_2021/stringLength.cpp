#include <iostream>
#include <string>
using namespace std;
class stringLength
{
private:
    string s;
    string s1;
    int len;
    string *sPtr;
    int *lenPtr;

public:
    stringLength() //default constructor
    {
        s = "";
        len = 0;
        cout << "default constructor is called" << endl;
    }

    stringLength(string S, int l) //parameterized constructor
        : s(S), len(l)
    {
        cout << "parameterized constructor is called" << endl;
    }

    stringLength(string S, string ss) //parameterized constructor
    {
        s = S;
        s1 = ss;
        cout << "parameterized constructor is called" << endl;
    }

    stringLength(int a) //dynamic constructor
    {
        sPtr = new string;
        *sPtr = "Hello";
        lenPtr = new int;
        *lenPtr = (*sPtr).length();
        cout << "dynamic constructor is called" << endl;
    }

    stringLength(string S, float L) //dynamic parameterized constructor
    {
        sPtr = new string;
        *sPtr = S;
        lenPtr = new int;
        *lenPtr = L;
        cout << "dynamic parameterized constructor is called" << endl;
    }

    stringLength(stringLength &ob) //copy constructor
    {
        s = ob.s;
        len = ob.len;
        cout << "copy constructor is called  obj5(obj2) " << endl;
    }

    ~stringLength()
    {
        cout << "Destructor is invoked" << endl;
        delete (sPtr);
        delete (lenPtr);
    }

    void display()
    {
        cout << "string = " << s << endl;
        cout << "string length= " << len << endl;
        cout << endl;
    }

    void display(int a)
    {
        cout << "string = " << *sPtr << endl;
        cout << "string length= " << *lenPtr << endl;
        cout << endl;
    }

    void add()
    {
        string s3 = s.append(s1);
        int ll = s3.length();
        cout << "resulted string = " << s3 << endl;
        cout << "resulted string length= " << ll << endl;
        cout << endl;
    }
};
// stringLength::~stringLength()
// {
//     delete (sPtr);
//     delete (lenPtr);
//     cout << "Destructor is invoked" << endl;
// }
int main()
{
    string r;
    int i;
    cout << "\nEnter the string : ";
    cin >> r;
    i = r.length();

    string ree;
    float imm;
    cout << "\nEnter another string : ";
    cin >> ree;
    imm = ree.length();

    stringLength obj1; //default constructor
    obj1.display();

    stringLength obj2(r, i); //parameterized constructor
    obj2.display();

    stringLength obj3(0); //dynamic constructor
    obj3.display(0);

    stringLength obj4(ree, imm); //dynamic parameterized constructor
    obj4.display(0);

    stringLength obj5(obj2); //copy constructor
    obj5.display();

    stringLength obj6(r, ree); //parameterized constructor
    obj6.add();

    return 0;
}