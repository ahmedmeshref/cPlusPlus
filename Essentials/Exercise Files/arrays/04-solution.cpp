// 04-solution.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>

using std::format;
using std::cout;

struct Book {
    const std::string title {};
    const char* author {};
    const char* publisher {};
    const short int ISBN {};
    const short int yearPublished {};
};

int main() {
    Book book1 {
        "Egypt", "Ahmed", "Ashraf", 1239, 2014
    };

    // Pointer itself is not const, so you can re-assign (can't change String)
    book1.author = "AHMED";
    cout << format("Book: {}, Author: {}, Publisher: {}, YP: {};\n", book1.title, book1.author,
                   book1.publisher, book1.yearPublished);
}