#include <iostream>
using namespace std;
int main()
{
    string food = "Pizza";
    string &meal = food;
    cout << "Food :\n"
         << food << endl;
    cout << "&meal :\n"
         << meal << endl;
    cout << &food;
    return 0;
}