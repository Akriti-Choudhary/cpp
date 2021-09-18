#include <iostream>

using namespace std;

struct student1
{
    char name[20];
    int roll;
    int marks[5];
    int total;
    float percent;
};

struct student1 *input(struct student1 *s)
{
    cout << "Enter name : " << endl;
    cin >> s->name;
    cout << "Enter roll number :" << endl;
    cin >> s->roll;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter marks of subject" << i + 1 << " : " << endl;
        cin >> s->marks[i];
    }
}

void totPer(struct student1 *s)
{
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += s->marks[i];
    }
    s->total = sum;
    s->percent = (sum / 500.0) * 100;
}

void sort(int arrSum[], int size)
{
    int temp;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (arrSum[j] < arrSum[j + 1])
            {
                temp = arrSum[j];
                arrSum[j] = arrSum[j + 1];
                arrSum[j + 1] = temp;
            }
        }
    }
}

void display(struct student1 *s)
{
    cout << "name :" << s->name << endl;
    cout << "roll number :" << s->roll << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "marks of subject" << i + 1 << " : " << s->marks[i] << endl;
    }
    cout << "Total marks :" << s->total << endl;
    cout << "Percentage :" << s->percent << "%" << endl;
}

void displayRankWise(struct student1 *s)
{

    cout << "name : " << s->name << "   "
         << "Roll number : " << s->roll << "  "
         << "Percentage : " << s->percent << "%" << endl;
}

int main()
{
    int n;
    cout << "Enter number of students" << endl;
    cin >> n;
    struct student1 arr[n];
    int sortSum[n];

    for (int i = 0; i < n; ++i)
    {
        cout<<endl;
        input(&arr[i]);
        totPer(&arr[i]);
    }

    //To display the details of the student of a particular roll

    int rollNum;

    cout << "Enter the roll number of student to display details :" << endl;
    cin >> rollNum;
    for (int i = 0; i < n; ++i)
    {
        if (rollNum == arr[i].roll)
        {
            display(&arr[i]);
        }
    }
    cout<<endl;
    //To display the details of students in a particular range

    int perBegin, perEnd;
    cout << "Enter the range of percent to display details :" << endl;
    cin >> perBegin >> perEnd;
    for (int i = 0; i < n; ++i)
    {
        if (perBegin < arr[i].percent && perEnd >= arr[i].percent)
        {
            display(&arr[i]);
            cout<<endl;
        }
    }

    //filling the array sortSum with the total marks of the students

    for (int i = 0; i < n; ++i)
    {
        sortSum[i] = arr[i].total;
    }

    //sorting total marks

    sort(sortSum, n);

    //Displaying the rank of students

    cout << "Rank of students according to the total marks :" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << "-----------------------------------------------------------" << endl;
        cout << "Rank " << i + 1 << " : ";
        for (int j = 0; j < n; ++j)
        {
            {
                if (sortSum[i] == arr[j].total)
                {
                    displayRankWise(&arr[j]);
                }
            }
        }
    }
    cout << "---------------------------------------------------------------" << endl;

    return 0;
}