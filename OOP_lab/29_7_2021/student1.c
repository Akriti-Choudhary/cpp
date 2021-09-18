#include <stdio.h>
struct student{
    char name[20];
    int roll;
    int m1 , m2, m3, m4, m5;

};
int main(){
    struct  student s1;
    printf("Enter the details of the student : \n");
    puts("Enter the name :");
    scanf("%[^\n]" ,s1.name);
     puts("Enter the rollnumber :");
    scanf("%d" ,&s1.roll);
    puts("Enter marks of 5 subjects :");
    scanf("%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5);

    puts("Displaying the details of the students");
    printf("name : %s \n roll num : %d \n mark1 : %d \n" ,s1.name ,s1.roll ,s1.m1);
    printf("mark2 : %d \n",s1.m2);
    printf("mark3 : %d \n",s1.m3);
    printf("mark4 : %d \n",s1.m4);
    printf("mark5 : %d \n",s1.m5);

    

    return 0;
}