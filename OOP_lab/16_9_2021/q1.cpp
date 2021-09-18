#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;

public:
    void display()
    {
        a = 1 + rand() % 100;
        cout << "a = " << a << endl;
    }
};
class A1
{
protected:
    int a1;

public:
    void display1()
    {
        a1 = 1 + rand() % 100;
        cout << "a1 = " << a1 << endl;
    }
};

class B : public A
{
protected:
    int b;

public:
    void display2()
    {
        b = 1 + rand() % 100;
        ;
        cout << "b = " << b << endl;
    }
};
class C : public A
{
protected:
    int c;

public:
    void display3()
    {
        c = 1 + rand() % 100;
        ;
        cout << "c = " << c << endl;
    }
};

class D : public B
{
protected:
    int d;

public:
    void display4()
    {
        d = 1 + rand() % 100;
        ;
        cout << "d = " << d << endl;
    }
};

class E : public A, public A1
{
protected:
    int e;

public:
    void dispe()
    {
        e = 1 + rand() % 100;
        ;
        cout << "e = " << e << endl;
    }
};

class F : public B
{
protected:
    int f;

public:
    void dispf()
    {
        f = 1 + rand() % 100;
        ;
        cout << "f  = " << f << endl;
    }
};

int main()
{
    B obb;
    C obc;
    D obd;
    E obe;
    F obf;
    cout << "Single : \n";
    obb.display();
    cout << "Multilevel : \n";
    obd.display4();
    cout << "Hybrid : \n";
    obd.display4();
    obf.display2();
    cout << "Multiple : \n";
    obe.display();
    obe.display1();
    cout << "Hierarchical : \n";
    obb.display2();
    obc.display3();
}