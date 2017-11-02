#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person( string Name, int IDcode, string phoneNum):
name{Name}, id{IDcode}, pnum{phoneNum}, active{true} { }

void Person::switcher()
{
  if(active)
  {
    active=false;
  }
  else
  {
    active =true;
  }
}
bool Person::status()
{
  return active;
}
string Person::pname()
{
  return name;
}

int Person::idcode()
{
  return id;
}

string Person::phone()
{
  return pnum;

}

string Person::pType()
{
  return "Person";
}

}
