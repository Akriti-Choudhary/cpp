#include <iostream>
#include <ctime>
using namespace std;
class Time
{
public:
    Time()
    {
        time_t currenttime;
        t = ctime(&currenttime);
    }
    void display()
    {
        cout << "The local date and time is : " << t << endl;
    }

private:
    int hour, minute, second;
    char *t;
};
int main()
{
    Time t1;
    t1.display();
    return 0;
}
