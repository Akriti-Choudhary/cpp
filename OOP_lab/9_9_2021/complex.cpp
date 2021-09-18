#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
    float *realPtr;
    float *imgPtr;

public:
    complex() //default constructor
    {
        real = 0;
        img = 0;
        cout << "default constructor is called" << endl;
    }
    complex(int r, int i) //parameterized constructor
        : real(r), img(i)
    {
        cout << "parameterized constructor is called" << endl;
    }
    complex(int a) //dynamic constructor
    {
        realPtr = new float;
        *realPtr = 5.1;
        imgPtr = new float;
        *imgPtr = 10.2;
        cout << "dynamic constructor is called" << endl;
    }
    complex(float re, float im) //dynamic parameterized constructor
    {
        realPtr = new float;
        *realPtr = re;
        imgPtr = new float;
        *imgPtr = im;
        cout << "dynamic parameterized constructor is called" << endl;
    }
    complex(complex &ob) //copy constructor
    {
        real = ob.real;
        img = ob.img;
        cout << "copy constructor is called  obj5(obj2) " << endl;
    }
    void display()
    {
        cout << "Result : " << endl;
        if (img >= 0)
            cout << real << " + i" << img << endl;
        else
            cout << real << " - i" << -(img) << endl;
        cout<<endl;
    }
    void display(int a)
    {
        cout << "Result : " << endl;
        if (*imgPtr >= 0)
            cout << *realPtr << " + i" << *imgPtr << endl;
        else
            cout << *realPtr << " - i" << -(*imgPtr) << endl;
        cout<<endl;
        
    }
    ~complex()
    {
        delete (realPtr);
        delete (imgPtr);
        cout << "Destructor is invoked" << endl;
    }
};
int main()
{
    int r, i;
    cout << "\nEnter the real part : ";
    cin >> r;
    cout << endl;
    cout << "\nEnter the imaginary part : ";
    cin >> i;
    cout << endl;

    float ree, imm;
    cout << "\nEnter float real part : ";
    cin >> ree;
    cout << endl;
    cout << "\nEnter float imaginary part : ";
    cin >> imm;
    cout << endl;

    complex obj1; //default constructor
    obj1.display();

    complex obj2(r, i); //parameterized constructor
    obj2.display();

    complex obj3(0); //dynamic constructor
    obj3.display(0);

    complex obj4(ree, imm); //dynamic parameterized constructor
    obj4.display(0);

    complex obj5(obj2); //copy constructor
    obj5.display();

    return 0;
}