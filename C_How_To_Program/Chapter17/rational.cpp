//perform the opertaions and print the results in the reduced form
#include <iostream>
using namespace std;
class rational_num
{
public:
    rational_num()
    {
        numerator = 1;
        denominator = 1;
    }
    rational_num(int num, int deno)
        : numerator(num), denominator(deno)
    {
    }
    rational_num add(rational_num a, rational_num b)
    {
        rational_num temp;

        temp.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
        temp.denominator = a.denominator * b.denominator;
        return temp;
    }
    rational_num subtract(rational_num a, rational_num b)
    {
        rational_num temp;
        temp.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
        temp.denominator = a.denominator * b.denominator;
        return temp;
    }
    rational_num multiply(rational_num a, rational_num b)
    {
        rational_num temp;
        temp.numerator = a.numerator * b.numerator;
        temp.denominator = a.denominator * b.denominator;
        return temp;
    }
    rational_num divide(rational_num a, rational_num b)
    {
        rational_num temp;
        temp.numerator = a.numerator * b.denominator;
        temp.denominator = a.denominator * b.numerator;
        return temp;
    }
    int gcd(int num1, int num2)
    {
        if (num1 < 0)   //when numerator is negative
            num1 = -num1;
        if (num2 < 0)   //when denominator is negative
            num2 = -num2;

        if (num1 == 0)  //when numerator is equal to 0
            return num2;
        if (num2 == 0)  //when denominator is equal to 0
            return num1;

        if (num1 == num2)   //when denominator and numerator are equal
            return num1;

        if (num1 > num2)    //when denominator is less than numerator 
            return gcd(num1 - num2, num2);
        return gcd(num1, num2 - num1);  //when denominator is greater than numerator 
    }
    // int gcd(int num1, int num2)
    // {
    //     if (num2 == 0)
    //     {
    //         return num1;
    //     }
    //     return gcd(num1, num1 % num2);
    // }

    void display()
    {
        int num;
        num = gcd(numerator, denominator);
        numerator = numerator / num;
        denominator = denominator / num;
        cout << numerator << " \\ " << denominator << endl;
    }

private:
    int numerator, denominator;
}; //end of class

int main()
{
    int a1, a2, b1, b2;
    cout << "Enter the numerator and denominator for the 1st object :" << endl;
    cin >> a1 >> b1;
    cout << "Enter the numerator and denominator for the 2nd object :" << endl;
    cin >> a2 >> b2;
    rational_num obj1(a1, b1);
    rational_num obj2(a2, b2);
    rational_num obj3;
    cout << "Addition " << endl;
    obj3 = obj3.add(obj1, obj2);
    obj3.display();
    cout << "Subtraction " << endl;
    obj3 = obj3.subtract(obj1, obj2);
    obj3.display();
    cout << "Multiplication " << endl;
    obj3 = obj3.multiply(obj1, obj2);
    obj3.display();
    cout << "Division " << endl;
    obj3 = obj3.divide(obj1, obj2);
    obj3.display();
    return 0;
}