class TimeDate
{
public:
    explicit TimeDate(int = 0, int = 0, int = 0, int = 1, int = 1, int = 2000); //default constructor

    //set functions
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    //get functions
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void tick();

    void printUniversal() const;
    void printStandard() const;
    void print();
    void nextDay();

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int month;
    unsigned int day;
    unsigned int year;

}; //end class Date
