// template-function.cpp by Bill Weinman [bw.org]
// updated 2022-06-04
#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;
using std::string;

template<class T>
T maxOf(T a, T b) {
    return a > b ? a : b;
}

int main() {
    string a = "foo";
    string b = "bar";
    string max = maxOf<string>(a, b);
    cout << format("Max = {}", max);
    return 0;
}