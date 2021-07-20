#include <iostream>
#include "modifying_class_GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradeBook1("Akriti's learning of C++", " Akriti Choudhary");
    GradeBook gradeBook2("learning of C++", " Ishu");

    cout << "GradeBook1 created for course: " << gradeBook1.getCourseName() << gradeBook1.getInstructorName()
         << "\n GradeBook2 created for course: " << gradeBook2.getCourseName() << gradeBook2.getInstructorName() << endl;
}//end main