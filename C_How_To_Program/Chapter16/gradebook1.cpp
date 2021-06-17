//Define a class GradeBook with a member function that takes a parameter,
//create a Gradebook object,and call it's displayMessage function
#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
    //function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) const
    {
        cout << "Welcome to the Grade Book for \n" <<courseName<<"!"<< endl;
    } //end of function displayMessage

}; //end class GradeBook

int main(){
    string nameOfCourse;
    GradeBook myGradeBook; //created a GradeBook object
    cout<<"Please enter the course name :"<<endl;
    getline(cin,nameOfCourse);
    cout<<endl;
    myGradeBook.displayMessage(nameOfCourse);//a call to object's displayMessage function
}//end main