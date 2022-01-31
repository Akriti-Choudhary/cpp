//Akriti Choudhary(2005776)
#include <iostream>

using namespace std;

class a1_776
{
private:
    string first_name_776;

public:
    a1_776()
    {
        first_name_776 = " ";
    }
    a1_776(string s_776)
    {
        first_name_776 = s_776;
    }
    string get_first_name()
    {
        return first_name_776;
    }
    
};

class a2_776 : public a1_776
{
private:
    string last_name_776;

public:
    a2_776()
    {
        last_name_776 = " ";
    }
    a2_776(string l)
    {
        last_name_776 = l;
    }
    void set_last_name(string l)
    {
        last_name_776 = l;
    }
    string get_last_name()
    {
        return last_name_776;
    }
    friend string operator+(a2_776 &ob2);
};

class a3_776 : public a2_776
{
private:
    string name_776;
    string l_776;
    a2_776 ob2;

public:
    a3_776()
    {
        cout << "Enter last name : ";
        cin >> l_776;
        ob2.set_last_name(l_776);
        name_776 = +ob2;
    }
    void display()
    {
        cout << name_776 << "\n";
    }
};

string operator+(a2_776 &ob2)
{
    string s_776;
    cout << "Enter first name : ";
    cin >> s_776;

    a1_776 ob1(s_776);

    string n_776;
    n_776 = ob1.get_first_name() + " " + ob2.last_name_776;
    return n_776;
}

int main()
{
    a1_776 obj1_776;
    a2_776 obj2_776;

    a3_776 ob3_776;
    ob3_776.display();

    return 0;
}
