// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <format>
#include <iostream>

using std::format;
using std::cout;

int factorial(int n) {
    if (n < 2) return n;
    return n * factorial(n - 1);
}

int iterativeFactorial(int n) {
    int result = 1;
    while (n > 1) {
        result *= n--;
    }
    return result;
}

int main() {
    int fact = factorial(5);
    cout << format("Rec fact of 5 = {}\n", fact);

    int fact_2 = iterativeFactorial(5);
    cout << format("fact of 5 = {}\n", fact_2);
}
