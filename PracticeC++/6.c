#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value of k for counting frequency : ");
    scanf("%d", &k);
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[k] == arr[i])
            count++;
    printf("kth element : %d , Frequency : %d", arr[k], count);
    return 0;
}