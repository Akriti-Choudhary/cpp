#include <iostream>
using namespace std;
class Account
{
protected:
    int custno;
    string custname;
    int balance;

public:
    void input()
    {
        cout << "Enter Customer number, Name and Balance : ";
        cin >> custno >> custname >> balance;
    }
};
class Savings : public Account
{
protected:
    int minbalance;

public:
    void depositSavings()
    {
        int dep;
        cout << "Enter Amount to deposit in Savings Account : ";
        cin >> dep;
        balance += dep;
    }
    void withdrawSavings()
    {
        cout << "enter the minimum balance";
        cin >> minbalance;
        int with;
        cout << "Enter Amount you want to Withdraw from Savings Account : ";
        cin >> with;
        if (balance - with < minbalance)
            cout << "Amount can't be withdrawn as you will not be left with minimum balance ... " << endl;
        else
        {
            balance -= with;
            cout << "Amount Withdrawn Successfully... Collect your Cash... \nRemaining Balance = " << balance << endl;
        }
    }
    void Display()
    {
        cout << "\nSavings Account :--\nCustomer number = " << custno << " Name = " << custname << " Balance Remaining = " << balance << endl;
    }
};
class Current : public Account
{
protected:
    int overdue;

public:
    void depositCurrent()
    {
        int dep;
        cout << "Enter Amount to deposit in Savings Account : ";
        cin >> dep;
        balance += dep;
    }
    void withdraw()
    {
        cout << "enter the overdue amount";
        cin >> overdue;
        int with;
        cout << "Enter Amount you want to Withdraw from Current Account : ";
        cin >> with;
        if (balance - with < overdue)
            cout << "Amount can't be withdrawn as you will not be left with Over-due amount ... " << endl;
        else
        {
            balance -= with;
            cout << "Amount Withdrawn Successfully... Collect your Cash... \nRemaining Balance = " << balance << endl;
        }
    }
    void Display()
    {
        cout << "\nCurrent Account :--\nCustomer number = " << custno << " Name = " << custname << " Balance Remaining = " << balance << endl;
    }
};
int main()
{
    Savings obs;
    Current obc;
    obs.input();
    obs.depositSavings();
    obs.withdrawSavings();
    obc.input();
    obc.depositCurrent();
    obc.withdraw();
    obs.Display();
    obc.Display();
}