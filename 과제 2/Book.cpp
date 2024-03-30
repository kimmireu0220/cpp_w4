#include "Book.h"
#include <iostream>
#include <string>

Book::Book() : Book("홍길동전", "허균", 1600) {}

Book::Book(const std::string& t, const std::string& a, int year) : title(t), author(a), publicationYear(year) {}

void Book::show() {
    std::cout << "제목: " << title << ", 작가: " << author << ", 출판 연도: " << publicationYear << std::endl;
}

Book::~Book() {}
