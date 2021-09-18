#include <iostream>
using namespace std;

class life
{
public:
    void inputVal(int mYear, int eYear);
    void inputAdd(int *mYear, int *eYear);
    void inputRef(int &manuYear, int &expYear);

    void Valecalculate();

private:
    int manufacturingYear;
    int expiryYear;
    int year;
};
void life::inputVal(int mYear, int eYear)
{
    manufacturingYear = mYear;
    expiryYear = eYear;
}
void life::inputAdd(int *mYear, int *eYear)
{
    manufacturingYear = *mYear;
    expiryYear = *eYear;
}
void life::inputRef(int &manuYear, int &expYear)
{
    manufacturingYear = manuYear;
    expiryYear = expYear;
}
void life::Valecalculate()
{
    year =  expiryYear - manufacturingYear ;
    cout << "Life of machine = " << year << endl;
}

int main()
{
    life obj;
    int mYear, eYear;
    cout << "Enter year of manufacturing :";
    cin >> mYear;
    cout << "Enter year of expiry :";
    cin >> eYear;
    obj.inputVal(mYear, eYear);
    cout << "Call by value : " << endl;
    obj.Valecalculate();
    cout << "Call by Address : " << endl;
    obj.inputAdd(&mYear, &eYear);
    obj.Valecalculate();
    cout << "Call by Reference : " << endl;
    obj.inputVal(mYear, eYear);
    obj.Valecalculate();

    return 0;
}