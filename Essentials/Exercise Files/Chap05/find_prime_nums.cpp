// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    std::vector<int> primeNums{};

    for (int num = 2; num < 100; ++num) {
        if (num == 2 || num == 20) {
            primeNums.push_back(num);
        }
    }

    cout << format("prime nums = {}\n", primeNums[1]);
}
