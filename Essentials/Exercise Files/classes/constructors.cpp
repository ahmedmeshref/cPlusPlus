// constructors.cpp by Bill Weinman [bw.org]
// updated 2022-06-18
#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;
using std::string;

const string unk {"unknown"};
const string clone_prefix {"clone-"};

// -- interface --
class Animal {
    string a_type {};
    string a_name {};
    string a_sound {};
public:
    Animal();   // default constructor
    Animal(const string& type, const string& name, const string& sound);
    Animal(const Animal&);  // copy constructor
    Animal& operator = (const Animal&);   // copy/assignment operator
    ~Animal();  // destructor
    void print() const;
};

Animal::Animal(): a_name(unk), a_type(unk), a_sound(unk) {};

Animal::Animal(const string& type, const string& name, const string& sound):
    a_type(type), a_name(name), a_sound(sound) {}

Animal::Animal(const Animal& animal) {
    cout << "Copy Constructor\n";
    a_name = clone_prefix + animal.a_name;
    a_type = animal.a_type;
    a_sound = animal.a_sound;
}

Animal::~Animal() {}

Animal& Animal::operator = (const Animal& animal) {
    cout << "assignment operator\n";
    // This is a pointer to the instance (!= memory address of given animal)
    if (this != &animal) {
        a_name = clone_prefix + animal.a_name;
        a_type = animal.a_type;
        a_sound = animal.a_sound;
    }
    return *this;
}

void Animal::print () const {
    cout << format("{} the {} says {}\n", a_name, a_type, a_sound);
}


int main() {
    Animal a {};
    a.print();
    
    const Animal b("goat", "bob", "baah");
    b.print();
    
    const Animal c = b;
    c.print();
    
    a = c;
    a.print();
    
    cout << "end of main\n";
    return 0;
}
