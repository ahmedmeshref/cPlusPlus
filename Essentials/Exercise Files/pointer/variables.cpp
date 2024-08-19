// variables.cpp by Bill Weinman [bw.org]
// updated 2022-06-12
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    // {} used to give an initial value of 0 here
    int i {};
    const char x = 'c';
    // Auto asks for var to be assigned a val
    auto ahmed {0};
    cout << format("i is {} || x is {}\n", i, x);
}
