#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

class Student 
{
    protected:
        string name , section;
        int roll , age;
};

class Marks
{
    protected : 
        int ms1 , ms2 , ms3;
}; 

class Result : public Student , public Marks 
{
    int total_marks ;
    float avg_marks;
    public : 
        void input()
        {
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter section : ";
            cin>>section;
            cout<<"enter roll : ";
            cin>>roll;
            cout<<"enter marks 1 , marks 2 & marks 3 : ";
            cin>>ms1>>ms2>>ms3;
            show();
        }

        void show()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Section : "<<section<<endl;
            cout<<"Roll no : "<<roll<<endl;
            cout<<"Marks1 : "<<ms1<<" Marks2 : "<<ms2<<" Marks3 : "<<ms3<<endl;
            total_marks = ms1 + ms2 + ms3;
            avg_marks = total_marks / 3 ;
            cout<<"Total marks : "<<total_marks<<"\nAverage marks : "<<avg_marks<<endl;
        }
};

int main()
{
    Result ob;
    ob.input();
    return 0;
}