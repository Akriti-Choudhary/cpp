#include <iostream>
#include <string>
#include "Invoice_class.h"
using namespace std;

int main(){
    string description1;
    int quantity1;
    string number1;
    cout<<"Enter the string value"<<endl;
    cin>>number1;
    int price1;
    cout<<"\nprice"<<endl;
    cin>>price1;
    cout<<"\ndescription"<<endl;
    cin>>description1;
    cout<<"\nQuantity"<<endl;
    cin>>quantity1;

    Invoice obj1(number1,description1,quantity1,price1);
    cout<<"Object is created:"<<endl;
    cout<<"string num :"<<obj1.getnum()<<endl;
    cout<<"description :"<<obj1.getdes()<<endl;
    cout<<"Quantity :"<<obj1.getquant()<<endl;
    cout<<"price per item :"<<obj1.getpp()<<endl;
    cout<<"Total amount :"<<obj1.getInvoiceAmount()<<endl;
}