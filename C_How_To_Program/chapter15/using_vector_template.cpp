//Demonstrating C++ Standard Library class template vector
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);

int main()
{
    //two vector objects created
    vector<int> integers1(7);
    vector<int> integers2(10);
    //print integers1 size and content
    cout << "Size of vector integer1 is " << integers1.size() << "\n vector after initialization:" << endl;
    outputVector(integers1);
    //print integers2 size and content
    cout << "Size of vector integer3 is " << integers2.size() << "\n vector after initialization:" << endl;
    outputVector(integers2);
    //input and print integers1 and integers2
    cout << "\nenter 17 numbers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input the integers contain:\n"
         << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);

    //use inequality operator (!=) with vector objects
    if (integers1 != integers2)
    {
        cout << "integers1 and integers2 are not equal" << endl;
    }
    //create vector integers3 using integers1 as an initializer ,print size and contents
    vector<int> integers3(integers1);
    cout << "Size of vector integer3 is " << integers3.size() << "\n vector after initialization:" << endl;
    outputVector(integers3);

    //use overloaded assignement(=) operator
    cout << "Assigning integers2 to integers1 :" << endl;
    integers1 = integers2;
    cout << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);
    //use equality operator with vector objects
    cout << "Evaluating integers1 == integers2" << endl;
    if (integers1 == integers2)
        cout << "Integers1 and integers2 are equal" << endl;
    //use squqre bracket to use rvalue
    cout << "\nintegers1[5] is " << integers1[5];
    //use square bracket to create lvalue
    cout << "\n\nAssigning 1000 to integer1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:" << endl;
    outputVector(integers1);
    //attempt to use out of range index
    try
    {
        cout << "An attempt to display integer1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    }
    catch (out_of_range &ex)
    {
        cout << "An exception occured :" << ex.what() << endl;
    }
}
//output vector contents
void outputVector(const vector<int> &array)
{
    size_t i;
    for (i = 0; i < array.size(); ++i)
    {
        cout << setw(12) << array[i];
        if ((i + 1) % 4 == 0)
        {
            cout << endl;
        }
    }
    if (i % 4 != 0)
    {
        cout << endl;
    }
}
//input vector contents
void inputVector(vector<int> &array)
{
    for (size_t i = 0; i < array.size(); ++i)
        cin >> array[i];
}
