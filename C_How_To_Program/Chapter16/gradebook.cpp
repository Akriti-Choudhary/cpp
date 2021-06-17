//Define a class GradeBook with a member function display message,
//create a Gradebook object,and call it's display message function
#include <iostream>
using namespace std;
class GradeBook
{
public:
    //function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } //end of function displayMessage

}; //end class GradeBook

int main(){
    GradeBook myGradeBook; //created a GradeBook object
    myGradeBook.displayMessage();//a call to object's displayMessage function
}//end main