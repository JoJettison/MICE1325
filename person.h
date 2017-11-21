#ifndef _PERSON_H
#define _PERSON_H
#include <string>

namespace Mice {
    class Person {
      public:
        Person(std::string name, std::string id, std::string phone);
        Person();
        std::string name() const;
        std::string id() const;
        std::string phone() const;
        bool is_active();
        void set_active(bool active);
      protected:
        std::string _name;
        std::string _id;
        std::string _phone;
        bool _active;
    };
}

std::ostream& operator<<(std::ostream& os, const Mice::Person& person);
#endif
