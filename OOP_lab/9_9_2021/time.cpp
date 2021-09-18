#include <iostream>
using namespace std;
class timeFormat
{
private:
    int hour;
    int minute;
    int *hPtr;
    int *mPtr;

public:
    timeFormat() //default constructor
    {
        hour = 0;
        minute = 0;
        cout << "default constructor is called" << endl;
    }
    timeFormat(int h, int m = 0) //parameterized constructor
        : hour(h), minute(m)
    {
        cout << "parameterized constructor is called" << endl;
    }
    timeFormat(int a, int b, int c) //dynamic constructor
    {
        hPtr = new int;
        *hPtr = 5;
        mPtr = new int;
        *mPtr = 10;
        cout << "dynamic constructor is called" << endl;
    }
    timeFormat(unsigned int h, unsigned int m) //dynamic parameterized constructor
    {
        hPtr = new int;
        *hPtr = h;
        mPtr = new int;
        *mPtr = m;
        cout << "dynamic parameterized constructor is called" << endl;
    }
    timeFormat(timeFormat &ob) //copy constructor
    {
        hour = ob.hour;
        minute = ob.minute;
        cout << "copy constructor is called  obj5(obj2) " << endl;
    }
    void display()
    {
        cout << "Result : " << endl;
        if (minute <= 60)
            cout << hour << " : " << minute << endl;
        else
            cout << hour + 1 << " : " << minute - 60 << endl;
        cout << endl;
    }
    void display(int a)
    {
        cout << "Result : " << endl;
        if (*mPtr <= 60)
            cout << *hPtr << " : " << *mPtr << endl;
        else
            cout << *hPtr + 1 << " : " << *mPtr - 60 << endl;
        cout << endl;
    }
    ~timeFormat()
    {
        cout << "Destructor is invoked" << endl;
        delete (hPtr);
        delete (mPtr);
    }
};
int main()
{
    int h, m;
    cout << "\nEnter hour : ";
    cin >> h;
    cout << endl;
    cout << "\nEnter minute : ";
    cin >> m;
    cout << endl;

    unsigned int hh, mm;
    cout << "\nEnter hour : ";
    cin >> hh;
    cout << endl;
    cout << "\nEnter minute : ";
    cin >> mm;
    cout << endl;

    timeFormat obj1; //default constructor
    obj1.display();

    timeFormat obj2(h, m); //parameterized constructor
    obj2.display();

    cout<<"default argument of minute"<<endl;
    timeFormat obj6(h); //parameterized constructor with one default argument
    obj6.display();

    timeFormat obj3(0, 0, 0); //dynamic constructor
    obj3.display(0);

    timeFormat obj4(hh, mm); //dynamic parameterized constructor
    obj4.display(0);

    timeFormat obj5(obj2); //copy constructor
    obj5.display();

    return 0;
}