#include <iostream>

using namespace std;

template <class T>
class Arr
{
private:
    T *arr;
    int size;

public:
    Arr(int n)
    {
        size = n;
        arr = new T[size];
    }
    void getData()
    {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    void sorting()
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
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    Arr<int> arr1(n);
    Arr<float> arr2(n);
    cout << "Enter elements of the integer array: \n";
    arr1.getData();

    cout << "Enter elements of the floating number array: \n";
    arr2.getData();

    //sorting
    arr1.sorting();
    arr2.sorting();

    cout << "\nResulting integer array:" << endl;
    arr1.display();

    cout << "\nResulting float number array:" << endl;
    arr2.display();
    return 0;
}