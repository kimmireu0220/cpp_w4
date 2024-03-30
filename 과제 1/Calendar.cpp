#include "Calendar.h"
#include <iostream>

Calendar::Calendar() : Calendar(2024, 3, 29) {}

Calendar::Calendar(int m, int d) : Calendar(2024, m, d) {}

Calendar::Calendar(int y, int m, int d) : year(y), month(m), day(d) {
   std::cout << year << "년 " << month << "월 " << day << "일 " << "Calendar 객체 생성" << std::endl;
}

Calendar::~Calendar() {
    std::cout << year << "년 " << month << "월 " << day << "일 " << "Calendar 객체 소멸" << std::endl;
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
    std::cout << year << "년 " << month << "월 " << day << "일 " << "날짜 출력" << std::endl;
}

