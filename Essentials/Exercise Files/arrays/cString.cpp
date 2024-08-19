// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    // Null terminated string, it ends with a 0 in the last position
    const char name[] {"Ahmed"};
    const char* name_2 {"Ahmed"};

    for (const char& letter : name) {
        cout << format("char = {}\n", letter);
    }

    // Pointer-Based for Loop -> To print only not-null chars
    for (const auto* p = name; /* check pointer val is not null */ *p; ++p) {
        cout << format("char2 = {}\n", *p);
    }

    // pointer to the first char
    const char* ptr = name;
    cout << format("Pointer is: {}", *ptr);
}
