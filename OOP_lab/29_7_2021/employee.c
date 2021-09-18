#include <stdio.h>

struct employee{
    int id;
    char name[20];
    int age;
    double salary;
};

int main(){
    int n;
    puts("Enter the number of employees");
    scanf("%d" ,&n);
    struct employee arr[n];
    for(int i = 0; i < n ; ++i){
        printf("Enter the details of %d employee :",i);
        puts("Enter name :");
        scanf("%[^\n]" ,arr[i].name);
        puts("Enter employee id :");
        scanf("%d" ,arr[i].id);
        puts("Enter age :");
        scanf("%d" ,arr[i].age);
        puts("Enter employee salary :");
        scanf("%d" ,arr[i].salary);
        
    }

    return 0;
}