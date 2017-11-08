#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
  public:
    Person(string Name, int IDcode, string phoneNum);
    string pname();
    int idcode();
    string phone();
    bool status();
    void switcher();
    virtual string pType();

  protected:
    string name;
    int id;
    string pnum;
    bool active;
};
#endif
