// auto-type.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>
#include <typeinfo>

using std::format;
using std::cout;

int main() {
    std::vector<int> nums {1, 2, 3, 4, 5};

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << format("Num = {}\n", *it);
    }
}
