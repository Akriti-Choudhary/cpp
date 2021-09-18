#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks[5];
};
struct student input(struct student *arr, int i)
{
    printf("Enter the details of the student %d : \n", i + 1);
    puts("Enter the name :");
    scanf("%s", arr[i].name);
    puts("Enter the rollnumber :");
    scanf("%d", &arr[i].roll);
    puts("Enter marks of 5 subjects :");
    for (int j = 0; j < 5; ++j)
    {
        scanf("%d", &arr[i].marks[j]);
    }
}
struct student totalper(struct student *arr, int i)
{
    int sum = 0;
    double percent;
    for (int j = 0; j < 5; ++j)
    {
        sum += arr[i].marks[j];
    }
    printf("sum of student %d : %d \n", i + 1, sum);
    percent = (sum / 500.0) * 100;
    printf("percentage of student %d : %.2lf \n", i + 1, percent);
}
void display(struct student *arr, int size, int j)
{
    puts("Displaying the details of the students");
    printf("name : %s \nroll num : %d \n", arr[j].name, arr[j].roll);
    puts("Marks of 5 subjects :");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d \n", arr[j].marks[i]);
    }
}

struct student sort(struct student *arr, int size, int i)
{
    struct student temp;
    int k, j;
    for (k = 0; k < 5; ++k)
    {
        for (j = 0; j < 4 - i; ++j)
        {
            if (arr[i].marks[j] < arr[i].marks[j + 1])
            {
                temp.marks[i] = arr[i].marks[j];
                arr[i].marks[j] = arr[i].marks[j + 1];
                arr[i].marks[j + 1] = temp.marks[i];
            }
        }
    }
}

int main()
{
    puts("Enter the number of students :");
    int n;
    scanf("%d", &n);
    struct student arr[n];
    for (int i = 0; i < n; ++i)
    {
        input(arr, i);
    }
    puts(" ");

    //displaying the details

    puts(" ");

    for (int i = 0; i < n; ++i)
    {

        display(arr, n, i);

        totalper(arr, i);
    }
    puts(" ");
    int rollNum;
    puts("enter the roll num for displaying details");
    scanf("%d", &rollNum);
    for (int i = 0; i < n; ++i)
    {
        
        if (arr[i].roll == rollNum)
        {
            printf("Displaying details of student roll num %d \n ", rollNum);
            display(arr, n, i);
        }
    }
     for (int i = 0; i < n; ++i)
    {
        sort(arr, n, i);
         printf("Displaying the sorted marks %d \n ", rollNum);
         display(arr, n, i);
        
    }
    return 0;
}