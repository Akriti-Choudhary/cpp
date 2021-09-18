#include <iostream>
using namespace std;
int main()
{
    int N;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int max = 0;
    cout << "Enter the value N :" << endl;
    cin >> N;
    int arr[N];
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < N; i = i + 2)
    {
        sum1 += arr[i];
    }
    for (int i = 1; i < N; i = i + 2)
    {
        sum2 += arr[i];
    }
    max = 0;
    sum3 = arr[0];
    for (int i = 3; i < N; i = i + 2)
    {
        sum3 += arr[i];
    }

    if (sum1 > sum2 && sum1 > sum3)
    {
        cout << sum1 << endl;
    }
    else if (sum2 > sum1 && sum2 > sum3)
    {
        cout << sum2 << endl;
    }
    else
        cout << sum3 << endl;

    return 0;
}