#include <iostream>
#include "Calendar.h"

int main() {
    // date1(기본 생성자), date2(2개의 인자를 가진 생성자), date3(3개의 인자를 가진 생성자)
    Calendar date1;
    Calendar date2(4, 5);
    Calendar date3(2002, 2, 2);

    // date1, date2, date3 출력
    date1.printCalendar(); 
    date2.printCalendar(); 
    date3.printCalendar(); 

    // 연도, 월, 일 입력
    int year, month, day;
    std::cout << "Input Year:";
    std::cin >> year;
    std::cout << "Input Month:";
    std::cin >> month;
    std::cout << "Input Day:";
    std::cin >> day;

    // date4(3개의 인자를 가진 생성자), date5(2개의 인자를 가진 생성자)
    Calendar date4(year, month, day);
    Calendar date5(month, day);
    date4.printCalendar(); 
    date5.printCalendar(); 

    // date1 연도, 월, 일 변경    
    date1.set(1945, 8, 15);
    date1.printCalendar(); 

    // date2 연도, 월, 일 변경    
    date2.set(12, 15);
    date2.printCalendar(); 
}
