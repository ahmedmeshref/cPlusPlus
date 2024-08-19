#include <format>
#include <iostream>

using std::cout;
using std::format;

int func() {
    int x {7};
    return ++x;
}

int funcStatic() {
    static int x {7};
    return ++x;
}

int main() {
    const int i {42};
    cout << format("The integer is {}\n", i);

    cout << format("X from func = {}\n", func());
    cout << format("X from func = {}\n", func());

    cout << format("X from func static = {}\n", funcStatic());
    cout << format("X from func static = {}\n", funcStatic());
}


/*
 * Qualifiers: provide additional information about the type of a var
 * 1- const: read-only
 * 2- volatile: var can change during program execution by external factor.
 *
 * Storage Duration:
 * 1- Static: keep state of a var/fun during the duration of the program. (it is not going to be re-initialized if called multi times)
 *            By default, a var that is defined outside of any scope is static.
 */