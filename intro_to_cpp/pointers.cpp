#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string name = "Akriti";
    string* namePtr = &name;
    cout<<"name :" + name<<endl << "namePtr :" << namePtr << endl<<"*namePtr : "  << *namePtr<<endl;
    cout<<"&name :"<<&name<<endl;
    cout<<"&*namePtr : "  << &*namePtr<<endl;
    //modifying pointers
    cout<<"modifying pointers \n";
    *namePtr = "Ishu";
    cout<<"name :" + name<<endl << "namePtr :" << namePtr << endl<<"*namePtr : "  << *namePtr<<endl;
    cout<<"&name :"<<&name<<endl;
    cout<<"&*namePtr : "  << &*namePtr<<endl;
    return 0;

}