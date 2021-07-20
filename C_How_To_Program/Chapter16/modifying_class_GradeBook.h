#include <string>
//GradeBook class defination
class GradeBook{
    public:
    explicit GradeBook(std::string,std::string);
    void setCourseName(std::string);
    void setInstructorName(std::string);
    std::string getCourseName() const;
    std::string getInstructorName() const;
    void displayMessage() const;
    private:
    std::string courseName; //courseName for this gradebook
    std::string instructorName;//courseInstructorName for this gradebook
};//end class GradeBook
