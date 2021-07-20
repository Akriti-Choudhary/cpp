#include <stdio.h>
int sum();
int main()
{
    printf("%d \n" ,sum(2));
}
int sum(){
    int total;
    total = 2 + 3;
    return total;
}