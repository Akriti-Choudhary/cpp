#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    //string arr[10] = {"ram", "hii", "happy", "Akriti", "JabWeMet", "Radha", "coding", "focus", "meditate", "live"};
    //string arr[10] = {"hii", "hii", "hii", "hii", "hii", "hii", "hii", "hii", "hii", " hello"};
    string arr[10] = {"hii", "hii", "hii", "hii", "hii", "hii", "hii", "hii", "hii", "hii"};
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (arr[i].compare(arr[j]) != 0)
            {
                count++;
            }
        }
    }
    if (count != 0)
    {
        cout << "hello" << endl;
    }
    else
    {
        cout << "bye" << endl;
    }
}