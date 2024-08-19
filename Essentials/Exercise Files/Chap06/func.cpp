// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;

// You can pass large values by ref to a function to not get stackOverFlow
void func(int* a) {
    // side effect
    ++*a;
    cout << "this is func()\n";
}

// return data
double add(double a, double b, const double d = 10) {
    return (a * b) + d;
}

// return by reference using const (avoid side-effects)
const std::string& addNums(double a, double b, const double d = 10) {
    // static to not be stored in the function stack || We return a ref, so we need to declare a non-local var
    static std::string msg = format("ans = {}\n", (a * b) + d);
    return msg;
}

int main() {
    int a {10};
    func(&a);
    cout << format("a = {}\n", a);

    cout << format("Calc = {}\n", add(1, 2));
    const auto& ans = addNums(1, 2);
    cout << ans;
}
