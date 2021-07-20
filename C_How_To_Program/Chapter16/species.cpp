#include <iostream>
#include <string>
#include "Species_class.h"
using namespace std;

int main()
{
    string name1;
    int population1;
    string country1;
    int growth_rate1;
    int year;
    cout << "Enter the name of the species" << endl;
    cin >> name1;
    cout << "country" << endl;
    cin >> country1;
    cout << "population" << endl;
    cin >> population1;
    cout << "Growth Rate" << endl;
    cin >> growth_rate1;
    cout << "years after which population is to be calculated :" << endl;
    cin >> year;
    species obj1(name1, country1, population1, growth_rate1);
    cout << "Object is created:" << endl;
    cout << "string name :" << obj1.getnm() << endl;
    cout << "Country :" << obj1.getcnt() << endl;
    cout << "Population :" << obj1.getpopu() << endl;
    cout << "Growth rate :" << obj1.getgrowth() << endl;
    cout << "Population expected after entered years :" << obj1.calculatePopulation(year) << endl;
}