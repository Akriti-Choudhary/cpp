#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
public:
    void set_age(int age)
    {
        student_age = age;
    }
    int get_age()
    {
        return student_age;
    }
    void set_first_name(string first_name)
    {
        student_first_name = first_name;
    }
    string get_first_name()
    {
        return student_first_name;
    }
    void set_last_name(string last_name)
    {
        student_last_name = last_name;
    }
    string get_last_name()
    {
        return student_last_name;
    }
    void set_standard(int standard)
    {
        student_standard = standard;
    }
    int get_standard()
    {
        return student_standard;
    }
    string to_string()
    {
        string str1 ,str2;
        stringstream ss;
        ss << student_age;;
        ss >> str1;
        stringstream yy;
        yy << student_standard;
        yy >> str2;
        complete =  str1 + "," + student_first_name + "," + student_last_name ;
        complete = complete + "," + str2;
        return complete;
    }

private:
    int student_age;
    string student_first_name;
    string student_last_name;
    int student_standard;
    string complete;
};
int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}