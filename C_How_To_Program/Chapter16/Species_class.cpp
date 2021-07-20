#include <iostream>
#include <string>
#include "Species_class.h"
using namespace std;

species::species(std::string nm, std::string cnt, int popu, int growth)
{
    setnm(nm);
    setcnt(cnt);
    setpopu(popu);
    setgrowth(growth);
}
void species::setnm(std::string nm)
{
    name = nm;
}
string species::getnm()
{
    return name;
}
void species::setcnt(std::string cnt)
{
    country = cnt;
}
string species::getcnt()
{
    return country;
}
void species::setpopu(int popu)
{

    population = popu;
}
int species::getpopu()
{
    return population;
}
void species::setgrowth(int growth)
{

    growth_rate = growth;
}
int species::getgrowth()
{
    return growth_rate;
}
int species::calculatePopulation(int year)
{
    return (year * growth_rate * population);
}
