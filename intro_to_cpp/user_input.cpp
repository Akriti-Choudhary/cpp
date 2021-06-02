#include <iostream>
using namespace std;
int main(){
string fullName;
cout<<"Enter your full name \n";
cin>>fullName;
//cin consider a space as a terminating character
cout<<" The entered name :"<<fullName<<endl;
//using getline() for user input
cout<<"Using getline()"<<endl;
getline(cin,fullName);
cout<<" The entered name :"<<fullName<<endl;
return 0;
}