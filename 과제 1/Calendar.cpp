#include "Calendar.h"
#include <iostream>

Calendar::Calendar() : Calendar(2024, 3, 29) {}

Calendar::Calendar(int m, int d) : Calendar(2024, m, d) {}

Calendar::Calendar(int y, int m, int d) : year(y), month(m), day(d) {
    std::cout << year << "Y" << month << "M" << day << "D" <<  "Calendar Created" << std::endl;
}

Calendar::~Calendar() {
    std::cout << year << "Y" << month << "M" << day << "D" <<  "Calendar Deleted" << std::endl;
}

void Calendar::set(int m, int d) {
    month = m;
    day = d;
}

void Calendar::set(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void Calendar::printCalendar() {
    std::cout << year << "Y " << month << "M " << day << "D " << "print Calendar" << std::endl;
}

