// array.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    // Size is static
    int nums[] { 1, 2, 3, 4, 5};

    nums[6] = 3;
    cout << format("Outbound Val = {}\n", nums[6]);

    for (const int& i : nums) {
        cout << format("{}\n", i);
    }
}


/*
 * Array:
 * - They can be used as if the array elements are a pointer *ia = 1;
 */