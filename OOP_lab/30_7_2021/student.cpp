#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int roll;
    int marks[5];
};

struct student input(struct student s1){
    cout<<"Enter the name of the student : "<<endl;
    getline(cin,s1.name);

     cout<<"Enter the roll number of the student : "<<endl;
    cin>>s1.roll;

     cout<<"Enter the marks  of the student : "<<endl;
     for(int i = 0 ; i < 5 ; ++i){
         cout<<"Enter the marks of subject"<<i+1<<endl;
         cin>>s1.marks[i];
     }
     return s1; 
    
}
void display(struct student s1){
cout<<"The name of the student : "<<s1.name<<endl;

     cout<<"The roll number of the student : "<<s1.roll<<endl;

     for(int i = 0 ; i < 5 ; ++i){
         cout<<"The marks of subject"<<i+1<<" is : "<<s1.marks[i]<<endl;
     }
}
int main(){
    struct student s1;

    //input the details of the student
    s1 = input(s1);

    //display the details of the student
    display(s1);

    return 0;
}
