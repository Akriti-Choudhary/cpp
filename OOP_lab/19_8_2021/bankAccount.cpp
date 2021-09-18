#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    Account()
        : accNum(0), balance(0.0)
    {
    }
    Account(string n, int accn, string t, double b)
        : name(n), accNum(accn), type(t), balance(b)
    {
    }
    void deposit(double amt)
    {
        balance += amt;
    }
    void withdraw(double amt)
    {
        if (balance <= 1000)
        {
            cout << "Balance cannot be withdrawn" << endl;
        }
        else if ((balance - amt) < 1000)
        {
            cout << "After performing the operation Balance will be below 1000" << endl;
            cout << "Balance cannot be withdrawn" << endl;
        }
        else
            balance -= amt;
    }
    void display()
    {
        cout << "--------------------------------------------------" << endl;
        cout << "Displaying the details" << endl;
        cout << "Name : " << name << endl;
        cout << "Account Type : " << type << endl;
        cout << "Account num : " << accNum << endl;
        cout << "Updated Balance : " << balance << endl;
        cout << "--------------------------------------------------" << endl;
    }

private:
    string name;
    int accNum;
    string type;
    double balance;
};

int main()
{
    double amt;
    double w_amt;

    string n;
    cout << "Enter Name : " << endl;
    cin >> n;
    cout << "Enter Account num : " << endl;
    int accn;
    cin >> accn;
    cout << "Enter Type of account : " << endl;
    string t;
    cin >> t;
    cout << "Enter the current Balance : " << endl;
    double b;
    cin >> b;
    Account obj(n, accn, t, b);
    int ch = 0;

    while (ch != -1)
    {
        cout << "enter choice \n1 - Deposit \n2 - Withdraw\n-1 - exit" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Amount to be deposited : " << endl;
            cin >> amt;
            obj.deposit(amt);
            obj.display();
            break;

        case 2:
            cout << "Amount to be withdrawn : " << endl;
            cin >> w_amt;
            obj.withdraw(w_amt);
            obj.display();
            break;
        case -1:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    cout << "Exit" << endl;

    return 0;
}