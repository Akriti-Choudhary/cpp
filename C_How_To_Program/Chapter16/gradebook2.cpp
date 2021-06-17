//Define a class GradeBook that contains a coursename data member,
//and member functions to set and get it's value
//create and manipulate a Gradebook object with these functions
#include <iostream>
#include <string>//C++ standard string class
using namespace std;
class GradeBook
{
public:
    //function that sets the course name
    void serCourseName(string name){
        courseName = name; //sores the course name in the object
    }
    //function that gets the courseName
    string getCourseName() const{
        return courseName;
    }
    //function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) const
    {
        cout << "Welcome to the Grade Book for \n" <<courseName<<"!"<< endl;
    } //end of function displayMessage
    private:
    string courseName;//coursename for this Gradebook

}; //end class GradeBook

int main(){
    string nameOfCourse;
    GradeBook myGradeBook; //created a GradeBook object
    //display initial value of courseName
    cout<<"Initial courseName is :"<<myGradeBook.getCourseName()<<endl;
    cout<<"Please enter the course name :"<<endl;
    getline(cin,nameOfCourse);
    cout<<endl;
    myGradeBook.displayMessage(nameOfCourse);//a call to object's displayMessage function
}//end main