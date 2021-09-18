#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *q[][3], n, i, j;
    printf("Enter the no of column:-");
    scanf("%d", &n);
    int **q = (int**)malloc(3*sizeof(int));
    for(int i =0 ; i < n; ++i)
    q[][i] = (int*)malloc(n * 3 * sizeof(int));
    printf("Enter the array:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &q[i][j]);
        }
    }
    printf("The array is:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    free(q);
    puts("Memory is successfully freed");
    return 0;
}