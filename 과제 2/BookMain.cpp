#include "Book.h"
#include <iostream>
#include <string>

int main() {
    // 기본 생성자로 객체 생성
    Book* book1 = new Book();
    book1->show();
    delete book1;

    std::string title = "SeongchunhyangJeon";
    std::string author = "Unknown";

    // 매개변수를 가진 생성자로 객체 생성
    Book* book2 = new Book(title, author, 1600);
    book2->show();
    delete book2;

    // 사용자로부터 입력을 받아 객체 생성
    int year;

    std::cout << "Title: ";
    std::getline(std::cin, title);

    std::cout << "Author: ";
    std::getline(std::cin, author);

    std::cout << "Publication year: ";
    std::cin >> year;

    Book* book3 = new Book(title, author, year);;
    book3->show();
    delete book3;
}
