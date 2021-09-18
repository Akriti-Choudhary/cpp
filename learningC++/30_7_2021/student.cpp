#include <iostream>
using namespace std;

int main(){
    int age;
    char name[10];
    float cgpa;
    cout<<"Enter the age,name and cgpa :";
    cin>>age>>name>>cgpa;
    //the same cin can be written as
    // cin>>age;
    // cin>>name;
    // cin>>cgpa;
    cout<<"Age = "<<age<<endl<<"name = "<<name<<endl<<"cgpa = "<<cgpa<<endl;
    return 0;
}