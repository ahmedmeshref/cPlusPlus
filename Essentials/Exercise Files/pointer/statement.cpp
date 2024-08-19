#include <format>
#include <iostream>

using std::cout;
using std::format;

int main() {
    int x;
    x = 120 + 120;

    auto printLine = format("X = {}\n", x);
    cout << printLine;
    return 0;
}