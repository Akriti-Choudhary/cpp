#include <iostream>
#include "modifying_class_GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, string instructor_name)
    : courseName(name), instructorName(instructor_name)
{
    //empty body
} //end of GradeBook constructor

void GradeBook::setCourseName(string name)
{
    courseName = name;
}
void GradeBook::setInstructorName(string instructor_name)
{
    instructorName = instructor_name;
}
std::string GradeBook::getCourseName() const
{
    return courseName;
}
std::string GradeBook::getInstructorName() const
{
    return instructorName;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n"
         << getCourseName() << "! \n"
                               "This course is presented by :"
         << getInstructorName() << endl;
}//end
