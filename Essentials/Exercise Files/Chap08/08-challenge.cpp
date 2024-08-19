// 08-challenge.cpp by Bill Weinman [bw.org]
// updated 2022-06-01
#include <format>
#include <iostream>

using std::format;
using std::cout;

template<typename T>
T factorial(T n) {
    auto res = n;
    while (n > 1) {
        res *= --n;
    }
    return res;
}

int main() {
    unsigned long n {5};
    cout << format("Factorial of {} is {}\n", n, factorial<int>(n));

    int num {3};
    cout << format("Factorial of {} is {}\n", num, factorial<int>(num));
}
