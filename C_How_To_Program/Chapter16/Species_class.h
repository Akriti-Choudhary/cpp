#include <iostream>
#include <string>
class species
{
public:
    species(std::string nm = " ", std::string cnt = " ", int popu = 0, int growth = 0);
    void setnm(std::string nm);
    std::string getnm();
    void setcnt(std::string cnt);
    std::string getcnt();
    void setpopu(int quan);
    int getpopu();
    void setgrowth(int pp);
    int getgrowth();
    int calculatePopulation(int year);

private:
    std::string name;
    std::string country;
    int population;
    int growth_rate;
};
