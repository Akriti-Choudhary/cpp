#include <iostream>
#include <string>
using namespace std;
class createAndDestroy
{
public:
    createAndDestroy(int, string); //constructor
    ~createAndDestroy();           //destructor

private:
    int objectID;
    string message;
};

createAndDestroy::createAndDestroy(int ID, string messageString)
    : objectID(ID), message(messageString)
{
    cout << "Object " << objectID << " constructor runs " << message << endl;
}

createAndDestroy::~createAndDestroy()
{
    cout << "Object " << objectID << " destructor runs " << message << endl;
}

void create();

createAndDestroy first(1, "(global before main)");
int main()
{
    cout << "\nMain function execution begins" << endl;
    createAndDestroy second(2, "(local automatic in main)");
    static createAndDestroy third(3, "(local static in main)");
    create();
    cout << "\nMain function execution resumes" << endl;
    createAndDestroy fourth(4, "(local automatic in main)");
    cout << "\nMain function execution ends" << endl;

    return 0;
}
void create()
{
    cout << "\ncreate function execution begins" << endl;
    createAndDestroy fifth(5, "(local automatic in create)");
    static createAndDestroy sixth(6, "(local static in create)");
    createAndDestroy seventh(7, "(local automatic in create)");
    cout << "\ncreate function execution ends" << endl;
}