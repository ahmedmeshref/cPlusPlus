// vector.cpp by Bill Weinman [bw.org]
// updated 2022-06-04
#include <format>
#include <iostream>
#include <string>
#include <vector>

using std::format;
using std::cout;
using std::vector;

int main() {
    vector<int> nums {1, 2, 3};
    cout << format("VI size = {}\n", nums.size());

    // iterate over
    for (auto it = nums.begin(); it < nums.end(); it++) {
        cout << format("{} ", *it);
    }

    // Accessor
    cout << format("\nNum in pos 1 = {}\n", nums.at(1));

    // push
    nums.push_back(10);

    // range-based for loop
    cout << "\nRange-based loop\n";
    for (const auto& num : nums) {
        cout << format("{} ", num);
    }

    return 0;
}
