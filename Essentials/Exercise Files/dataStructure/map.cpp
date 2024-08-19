/*
 *
 * Find()
 *      -> returns a C++ iterator, which is a pointer that points to the beginning of the iterable key-value pair.
 *      -> No elements -> my_dictionary.end()
 */

#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>

using std::unordered_map;
using std::string;
using std::vector;
using std::cout;

int main() {
    unordered_map<int, string> countries = {
            {128, "Egypt"},
            {200, "Spain"}
    };

    if (countries.find(120) == countries.end()) {
        countries[120] = "Italy";
    }

    // "->" is eq to (*it).first, basically accessing data within an iterator
    for (auto it = countries.begin(); it != countries.end(); it++) {
        cout << (*it).first << ": " << it->second << "\n";
    }

    // range based for loop
    for (const auto& country: countries) {
        cout << country.first << ": " << country.second << "\n";
    }
    return 0;
}