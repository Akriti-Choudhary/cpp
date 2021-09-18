#include <iostream>
#include <string>
using namespace std;
class book
{
public:
    string name;
    string author;
    double price;
    void input()
    {
        cout << "Enter the name of the book :" << endl;
        cin >> name;
        cout << "Enter the name of the author :" << endl;
        cin >> author;
        cout << "Enter the price of the book :" << endl;
        cin >> price;
    }
    void display()
    {
        cout << "name of the book :" << name << endl;
        cout << "name of the author :" << author << endl;
        cout << "price of the book :" << price << endl;
    }
};
int main()
{
    int n;
    int ulim = 0, llim = 0;
    cout << "Enter number of books : ";
    cin >> n;
    cout << endl;
    book arr[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i].input();
    }
    cout << "Enter the price range :" << endl;
    cin >> ulim;
    cin >> llim;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i].)
    }
}