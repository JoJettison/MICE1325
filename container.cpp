#include "container.h"
#include <iostream>
#include <string>
using namespace std;

Container::Container(string Name, string Description, double wholesaleCost, double retailPrice, int maximumScoops):
  Item(Name,Description,wholesaleCost,retailPrice), maxScoops{maximumScoops} { }


 string Container::type()
{
  return "Container";
}


int Container::maximScoops()
{
  return maxScoops;
}
