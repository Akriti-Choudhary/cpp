#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char **argv)
{
    std::cout << "Hello Akriti" << std::endl;
    if (argc != 1)
    {
        std::cout << "You entered " << argc << " arguments !" << std::endl;
    }
    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << "\n";
    }
    return 0;
}