#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar {
private:
    int year;
    int month;
    int day;
public:
    Calendar();
    Calendar(int m, int d);
    Calendar(int y, int m, int d);
    ~Calendar();
    void set(int m, int d);
    void set(int y, int m, int d);
    void printCalendar();
};

#endif // CALENDAR_H
