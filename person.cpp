#include "person.h"
#include <iomanip>
#include <iostream>

namespace Mice {
Person::Person(std::string name, std::string id, std::string phone)
             : _name{name}, _id{id}, _phone{phone}, _active{true} { }
std::string Person::name() const {return _name;}
std::string Person::id() const {return _id;}
std::string Person::phone() const {return _phone;}
bool Person::is_active() {return _active;}
void Person::set_active(bool active) {_active = active;}
}

std::ostream& operator<<(std::ostream& os, const Mice::Person& person) {
    os << std::setw(40) << person.name() << ": "
       << std::setprecision(2) << std::fixed << person.id();
    return os;
}
