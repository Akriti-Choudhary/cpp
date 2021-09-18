#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class bookstore
{
    string name;
    string author;
    float price;

public:
    void getbooks()
    {
        cout << "Enter the name of the book: ";
        cin >> name;
        cout << "Enter the author: ";
        cin >> author;
        cout << "Enter the price: ";
        cin >> price;
    }
    friend void check(bookstore b[], int n);
};
void check(bookstore b[], int n)
{
    int i;
    int low, up, c = 0;
    cout << "Enter the lower index of the price range: ";
    cin >> low;
    cout << "Enter the upper index of the price range: ";
    cin >> up;
    cout << "\nThe books in the range " << low << " to " << up << " are: ";
    for (i = 0; i < n; i++)
    {
        if (b[i].price >= low && b[i].price <= up)
        {
            cout << "\nName of the book"
                 << " : " << b[i].name<<endl;
            cout << "Author of the book"
                 << " : " << b[i].author<<endl;
            cout << "Price of the book "
                 << " : " << b[i].price << "\n";
            c = 1;
        }
    }
    if (c == 0)
    {
        cout << "No books are in this price range.\n";
    }
}
int main()
{
    int n, i;
    cout << "Enter the number of books: ";
    cin >> n;
    bookstore b[n];
    for (i = 0; i < n; i++)
    {
        b[i].getbooks();
    }
    check(b, n);
    return 0;
}