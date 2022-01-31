#include <iostream>
using namespace std;

template <class T>
void sorting(int size, T arr[])
{
    T temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void DisplayArray(int size, T arr[])
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Enter size  of the (int)array: ";
    cin >> n;
    int arr1[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    sorting(n, arr1);
    DisplayArray(n, arr1);

    cout << "\nEnter size of the (float)array: ";
    cin >> n;
    float arr2[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    sorting(n, arr2);
    DisplayArray(n, arr2);

    return 0;
}