#include <iostream>
using namespace std;
#include "Date.h"

Date::Date(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
}

void Date::setDay(int d) { day = d; }
int Date::getDay() { return day; }

void Date::setMonth(int m) {
    if (m <= 0 || m > 12) month = 1;
    else month = m;
}
int Date::getMonth() { return month; }

void Date::setYear(int y) { year = y; }
int Date::getYear() { return year; }

string Date::toString() {
    return to_string(day) + "." + to_string(month) + "." + to_string(year);
}