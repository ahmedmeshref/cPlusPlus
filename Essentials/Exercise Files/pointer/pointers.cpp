// pointers.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

/*
 * Pointer: var that stores the memory address of another object (var)
 * Gives a more efficient memory. Pass pointer to fun instead of val
 * -------------------------------------------------------------------
 * int* z = {ref}  -> pointer
 * {} = *z         -> dereference
 *
 * -------------------------------------------------------------------
 * Reference: alias to a var
 * int& x = {}     -> ref
 * {pointer} = &i  -> returns the memory address of i
 */

void addTen(int* j) {
    // Dereference the pointer
    *j += 10;
}

int main() {
    int x {7};
    int y {8};
    // *ip is a pointer to x
    int* ip = &x;
    // z is a (alias) reference to x (if z changes, x changes) | can't be changed to refer to another var
    // STD to declare it as const as changing z val will affect (x && pointers to x)
    const int& z = x;

    cout << format("The value of x is {}\n", x);
    cout << format("The value of *ip is {}\n", *ip);
    cout << format("The value of z is {}\n", z);

    addTen(ip);
    cout << format("The value of x is {}\n", x);
    cout << format("The value of *ip is {}\n", *ip);
    cout << format("The value of z is {}\n", z);

    ip = &y;
    cout << format("The value of *ip is {}\n", *ip);
}
