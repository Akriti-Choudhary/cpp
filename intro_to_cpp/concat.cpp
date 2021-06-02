#include <iostream>
using namespace std;
int main(){
    string firstName = "Akriti";
    string lastName = "Choudhary";
    string fullName = firstName + lastName;
    cout<< fullName <<endl;
    //adding a space between firstName and lastName 
     fullName = firstName + " "+ lastName;
    cout<< fullName <<endl;
    //using append()
     fullName = firstName.append( lastName);
    cout<< fullName <<endl;
    //calculating lenght() of fullName
    cout<<"the length of fullName :"<<fullName.length()<<endl;
    //calculating size() of fullName
    cout<<"the length of fullName :"<<fullName.size()<<endl;
    //to find the second letter in fullName
    cout<<fullName[1]<<endl;
    fullName[0] = 'B';
        cout<< fullName <<endl;
    return 0;
}
