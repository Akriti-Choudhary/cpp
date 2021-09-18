#include<iostream>
using namespace std;
class Metre;
class inch
{
float feet, inches;
public:
float total;
void details()
{
cout<<"Enter the distance in feet and inches: ";
cin>>feet;
cin>>inches;
total = (feet * 12) + inches;
total = total * 2.54;
}
friend void calculation(Metre, inch);
};
class Metre
{
float met, cent;
public:
float total;
void details()
{
cout<<"Enter the distance in metres and centimetres: ";
cin>>met;
cin>>cent;
total = met * 100 + cent;
}
friend void calculation(Metre, inch);
};
void calculation(Metre m, inch i)
{
if(m.total > i.total)
{
cout<<"The larger of distances is "<<m.met<<" metres and "<<m.cent<<" centimetres.";
}
else
{
cout<<"The larger of distances is "<<i.feet<<" feet and "<<i.inches<<"inches";
}
}
int main()
{
Metre m;
inch i;
m.details();
i.details();
calculation(m, i);
return 0;
}