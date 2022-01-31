#include <iostream>
using namespace std;

template <class T>

T max(T t[], int size)
{
    T temp = t[0];
    for (int i = 0; i < size; i++)
    {
        if (temp < t[i])
        {
            temp = t[i];
        }
    }
    return temp;
}

int main()
{
    int N;
    cout<<"Enter size of the array : \n";
    cin>>N;

    int Arr[N];
    cout << "Enter elements of the array : " << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    cout << "Maximum number in the array = " << max(Arr, N) << endl;
    return 0;
}