#include <iostream>
using namespace std;
int main()
{

    int *iPtr = new int;
    *iPtr = 5;
    float *fPtr = new float(3.14);
    char *cPtr = new char('A');

    cout << *iPtr << endl;
    cout << *fPtr << endl;
    cout << *cPtr << endl;

    delete iPtr;
    delete fPtr;
    delete cPtr;

    //for array
    cout << "Enter size of array :" << endl;
    int num;
    cin >> num;
    float *arr = new float(num);
    cout<<"Enter elements :"<<endl;
    for (int i = 0; i < num; ++i)
    {
        cin >> *(arr + i);
    }
    cout << "Output" << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;

    return 0;
}