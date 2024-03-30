#include "Book.h"
#include <iostream>
#include <string>

Book::Book() : Book("HonggildongJeon", "Heo Gyun", 1600) {}

Book::Book(const std::string& t, const std::string& a, int year) : title(t), author(a), publicationYear(year) {}

void Book::show() {
    std::cout << "Title: " << title << " Author: " << author << " Publication year: " << publicationYear << std::endl;
}

Book::~Book() {}
