#include <iostream>
#include <array>
using namespace std;
void printArray(array<int, 10> arr)
{
    for (int x : arr)
    { //using Foreach loop to print elements of the array
        cout << x << " ";
    }
}
int main()
{

    array<int, 10> arr1; //declaring an array of size 10
    array<int, 10> arr2; //declaring an array of size 10

    cout << "Displaying the size of array 1 : ";
    cout << arr1.size() << endl;
    cout << "filling the values of the array1 with 7 : ";
    arr1.fill(7); //filling all the elements of array with 7
    printArray(arr1);
    cout << endl;
    cout << "filling the values of the array2 with fillArray() : " << endl;
    for (int i = 0; i < arr2.size(); ++i)
    {
        cin >> arr2[i];
    }
    cout << "Displaying the elements of array 2 : " << endl;
    printArray(arr2);
    cout << endl;
    //swapping elements of array1 with array2 using swap() member function
    cout << "Swapping the elements of array1 with array2 and printing them :" << endl;
    arr1.swap(arr2);

    cout << "Array1" << endl;
    printArray(arr1);
    cout << endl;

    cout << "Array2" << endl;
    printArray(arr2);
    cout << endl;

    array<int, 10> arr = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; //declaring an array of size 10
    cout << "the arr is :" << endl;
    printArray(arr);
    cout << endl;

    /*begin() returns iterator to beginning */
    cout << "arr.begin()" << endl;
    cout << *arr.begin() << endl;

    /*end() returns iterator to end */
    cout << "arr.end()" << endl;
    cout << *(arr.end() - 1);
    cout << endl;

    /* rbegin() returns reverse iterator to reverse beginning */
    cout << "arr.rbegin() :";
    cout << *arr.rbegin() << endl;

    /* rend() returns reverse iterator to reverse end */
    cout << "arr.rend() :";
    cout << *(arr.rend() - 1);
    cout << endl;

    /*cbegin() -return const_iterator to beginning*/
    cout << "arr.cbegin() :";
    cout << *arr.cbegin() << endl;

    /*cend() -return const_iterator to end*/
    cout << "arr.cend() :";
    cout << *(arr.cend() - 1);
    cout << endl;

    /*crbegin() -return const_reverse_iterator to reverse beginning*/
    cout << "arr.crbegin() :";
    cout << *arr.crbegin() << endl;

    /*crend() -return const_reverse_iterator to reverse end*/
    cout << "arr.crend() :";
    cout << *(arr.crend() - 1);
    cout << endl;

    /*empty() - checks whether array is empty*/
    cout << "Checking whether array is empty :" << arr.empty() << endl;

    /* max_size() returns the maximum size of the array */
    cout << "Max size of array : " << arr.size() << endl;

    cout << "First element of array : " << arr.front() << endl;
    cout << "last element of array : " << arr.back() << endl;

    /*data() - Returns a pointer to the first element in the array object.
    Because elements in the array are stored in contiguous storage locations, the pointer retrieved can be offset to access any element in the array.
    */
    cout << "Data " << *(arr.data()) << endl;

    //Relational Operator in array
     cout<<"arr1 >= arr2 : ";
     cout<<(arr1 >= arr2)?cout<<"arr1 is greater than or equal to arr2":cout<<"arr1 is not greater than or equal to arr2"<<endl;

    return 0;
}