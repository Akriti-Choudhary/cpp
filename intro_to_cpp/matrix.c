#include <stdio.h>
void sort(int* arr1 , int n);
int main( void){
    int n , k ,count = 0;
    puts("Enter the order of square matrix :");
    scanf("%d" ,&n);
    int arr[n][n];
    int arr1[n];
    //entering data in the 2d array
    puts("Enter the elements of square matrix :");
    for(int i = 0 ; i < n ;++i){
        for(int j = 0; j < n ; ++j){
            scanf("%d" ,&arr[i][j]);
        }
    }
for(int i = 0 ; i < n ;++i){
        for(int j = 0; j < n ; ++j){
            arr1[j] = arr[i][j];
            
        }
        sort(arr1 ,n);
        for(int p = 0; p < n ; ++p){
         arr[i][p] = arr1[p];
            
        }
    }
    //printing sorted array row-wise
    for(int i = 0 ; i < n ;++i){
        for(int j = 0; j < n ; ++j){
            printf("%d " ,arr[i][j]);
        }
        puts(" ");
    }
        //enter the value of k
        puts("enter the value of k :");
        scanf("%d" ,&k);
        for(int i = 0 ; i < n ;++i){
        for(int j = 0; j < n ; ++j){
            count++;
            if(count == k){
                printf("the kth smallest element is : %d \n" ,arr[i][j]);
                break;
            }
        }
    }

    return 0;
}
void sort(int* arr1 ,int n){
    int temp;
    for(int i = 0 ; i < n ;++i){
        for(int j = 0; j < n ; ++j){
            if(arr1[j] > arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
}

