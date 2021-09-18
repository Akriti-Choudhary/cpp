#include <iostream>
using namespace std;

class student
{
    char name[10];
    int roll;
    float cgpa;
    char branch[10];

    public:
    void input();
    void output();
};
void student :: input(){
    cout<<"name :"<<endl;
    cin>>name;
    cout<<"branch :"<<endl;
    cin>>branch;
    cout<<"roll number:"<<endl;
    cin>>roll;
    cout<<"cgpa :"<<endl;
    cin>>cgpa;
    

}
void student :: output(){
    cout<<"Output"<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"roll number:"<<roll<<endl;
    cout<<"cgpa :"<<cgpa<<endl;
    cout<<"branch :"<<branch;

}
int main()
{
    student s;
    s.input();
    s.output();

    return 0;
}