class Time
{
public:
    explicit Time(int = 0, int = 0, int = 0); //default constructor

    //set functions
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    //get functions
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void tick() ;


    void printUniversal() const;
    void printStandard() const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};