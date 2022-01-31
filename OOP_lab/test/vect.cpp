//Akriti Choudhary(2005776)

#include <iostream>
using namespace std;

class vect_776
{
private:
    int size_776;
    int *ptr_776;

public:
    vect_776()
    {
        cout << "Default Constructor is called\n";
        size_776 = 0;
        ptr_776 = NULL;
    }
    vect_776(int s_776)
    {
        cout << "Parameterized Constructor is called\n";
        size_776 = s_776;
        ptr_776 = new int(size_776);
    }
    void input()
    {
        cout << "Enter the elements of the array : \n";
        for (int i = 0; i < size_776; ++i)
        {
            cout << "Enter the " << i + 1 << " element of the array : ";
            cin >> ptr_776[i];
        }
    }
    void display()
    {
        for (int i = 0; i < size_776; ++i)
        {
            cout << ptr_776[i] << "\t";
        }
        cout << "\n";
    }
    ~vect_776()
    {
        cout << "Destructor is called\n";
        free(ptr_776);
    }
};
int main()
{
    int s_776;

    cout << "Enter the size of the dynamic array : ";
    cin >> s_776;

    vect_776 Akriti(s_776);
    Akriti.input();
    Akriti.display();

    return 0;
}