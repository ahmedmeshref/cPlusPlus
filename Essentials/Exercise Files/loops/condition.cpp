// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int x {23};
    int y {20};

    if (x > y) cout << "condition is true\n";
    else cout << "condition is false\n";

    // ternary
    auto s = x > y ? "Yes" : "No";
    cout << format("{}\n", s);
}
