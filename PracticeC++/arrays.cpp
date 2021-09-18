#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <limits>

int main()
{
    int arrnNums[10] = {1};
    int arrnNums2[] = {1, 2, 3};
    int arrnNums3[5] = {8, 9};
    std::cout << "First value : " << arrnNums3[0] << "\n";
    arrnNums3[0] = 7;
    std::cout << "First value : " << arrnNums3[0] << "\n";
    std::cout << "Total size of the array :" << sizeof(arrnNums3) / sizeof(int) << "\n";
    int arrnNums4[2][2][2] = {{{1, 2}, {3, 4}},
                              {{5, 6},
                               {7, 8}}};
    //to print 8
    std::cout << arrnNums4[1][1][1] <<"\n";
    return 0;
}