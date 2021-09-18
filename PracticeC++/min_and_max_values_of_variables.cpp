#include <iostream>
#include <string>
#include <sstream>
#include <limits>

int main()
{

    bool isMarried = false;
    int age = 19;
    unsigned short int marks = 100;
    short int weight = 60;
    char mygrade = 'A';
    float pi = 3.14;
    double num = 1111.98;
    auto name = "Akriti"; //compile go and assign your type for you

    //printing limits
    std::cout<<"Min bool"<< std::numeric_limits<bool>::min()<<"\n";
    std::cout<<"Max bool"<< std::numeric_limits<bool>::max()<<"\n";

    std::cout<<"Min int"<<std::numeric_limits<int>::min()<<std::endl;
    std::cout<<"Max int"<<std::numeric_limits<int>::max()<<std::endl;

    std::cout<<"Min short int"<<std::numeric_limits<short int>::min()<<std::endl;
    std::cout<<"Max short int"<<std::numeric_limits<short int>::max()<<std::endl;

    std::cout<<"Min unsigned short int"<<std::numeric_limits<unsigned short int>::min()<<std::endl;
    std::cout<<"Max unsigned short int"<<std::numeric_limits<unsigned short int>::max()<<std::endl;

    std::cout<<"Min float"<<std::numeric_limits<float>::min()<<std::endl;
    std::cout<<"Max float"<<std::numeric_limits<float>::max()<<std::endl;

    std::cout<<"Min double"<<std::numeric_limits<double>::min()<<std::endl;
    std::cout<<"Max double"<<std::numeric_limits<double>::max()<<std::endl;

    std::cout<<"Min char"<<std::numeric_limits<char>::min()<<std::endl;
    std::cout<<"Max char"<<std::numeric_limits<char>::max()<<std::endl;

    
    return 0;
}
