#ifndef MANAGER_H
#define MANAGER_H
#include"item.h"
#include"scoop.h"
#include"toppings.h"
#include"container.h"
#include "person.h"
#include "server.h"
#include "customer.h"
#include "serving.h"

#include <vector>
#include<string>
#include <iostream>
#include <sstream>
using namespace std;

class Manager: public Person
{
  public:
    Manager(string Name, int IDcode, string phoneNum);



};
#endif
