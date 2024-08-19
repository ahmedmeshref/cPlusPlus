// class.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <format>
#include <iostream>

using std::format;
using std::cout;
using std::string;

class Person {
    string fName {};
    string lName {};

public:
    Person(const string& firstName, const string& lastName) {
        fName = firstName;
        lName = lastName;
    }
    void setFName(const string& value);
    void setLName(const string& value);
    // const after func signature to ensure no data mutation in the function
    const string& getName() const;
};

void Person::setFName(const string& value) {
    // this-> dereference the pointer to the current object
    this->fName = value;
}

void Person::setLName(const string& value) {
    lName = value;
}

const string& Person::getName() const {
    const static string fullName = format("{} {}\n", fName, lName);
    return fullName;
}

int main() {
    Person ahmed {"Ahmed", "Mohamed"};
    ahmed.setLName("Ramadan");
    cout << format("Person Name: {}\n", ahmed.getName());
}