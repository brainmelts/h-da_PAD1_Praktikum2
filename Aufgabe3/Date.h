#include <string>

class Date {
public:
    Date(int, int, int);

    void setDay(int);
    int getDay() const;

    void setMonth(int);
    int getMonth() const;

    void setYear(int);
    int getYear() const;

    std::string toString() const;

private:
    int day;
    int month;
    int year;
};