#include <iostream>
using namespace std;

#include "maximum.h" //include defination of function template maximum 
int main(){
	int int1 , int2 , int3;
	cout<<"Input three integer values :";
	cin >> int1 >> int2 >> int3 ;
	
	cout<<" \nThe maximum integer value is :"<<maximum(int1 ,int2 ,int3);
	
	//invoke double version of maximum
	double double1 , double2 , double3;
	cout<<"\nInput three double values :";
	cin >> double1 >> double2 >> double3 ;
	
	cout<<"\n The maximum double value is :"<<maximum(double1 , double2 , double3);
	
	//demonstrate maximum with char values
	char char1 ,char2 , char3;
	cout<<"\n \n Input three characters :";
	cin >> char1 >> char2 >> char3 ;
	
	cout<<"The maximum character value is :"<<maximum(char1 , char2 , char3)<<endl;
}
