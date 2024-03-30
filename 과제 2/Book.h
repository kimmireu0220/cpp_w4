#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book();
    Book(const std::string& t, const std::string& a, int year);
    void show();
    ~Book();
};

#endif // BOOK_H
