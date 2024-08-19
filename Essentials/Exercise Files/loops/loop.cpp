// while.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <format>
#include <iostream>

using std::format;
using std::cout;
using std::string;

void print_characters(const string& name) {
    // Reference to char instead of copying the char (Efficiency).
    for (const auto& chr: name) {
        // String null terminator
        if (!chr) break;
        cout << format("char = {}\n", chr);
    }
}

int main() {
    int nums[] { 100, 200, 300, 400, 500 };
    const char name[] { "ahmed" };

    int i {0};
    // length = total size of nums / size of one element
    while (i < sizeof(nums)/sizeof(nums[0])) {
        cout << format("{}th = {}\n", i, nums[i]);
        i++;
    }

    // C loop
    /** for (auto* p = name; *p; p++) {
        cout <<  format("char = {}\n", *p);
    } **/

    // C++ Loop
    print_characters(name);
}

