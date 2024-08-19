// struct.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>

using std::format;
using std::cout;

struct Person {
    int age {};
    double money {};
    const char* name {};
};

int main() {
    Person ahmed { 25, 25.54, "Ahmed Ramadan"};
    cout << format("Person {} is {} YRs old and has {}$", ahmed.name, ahmed.age, ahmed.money);
};