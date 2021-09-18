#include <iostream>
using namespace std;

class life
{
public:
    void input();
    void Valecalculate();

private:
    int manufacturingYear;
    int expiryYear;
    int year;
};
void life::input()
{
    cout << "Enter year of manufacturing :";
    cin >> manufacturingYear;
    cout << "Enter year of expiry :";
    cin >> expiryYear;
}

int main()
{

    return 0;
}