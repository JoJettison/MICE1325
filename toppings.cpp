#include "toppings.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

Toppings::Toppings(string Name, string Description, double wholesaleCost, double retailPrice, int topStyle):
Item(Name,Description,wholesaleCost,retailPrice), tStyle{topStyle} { }

string Toppings::type()
{
  return "Toppings";
}

int Toppings::style()
{
  return tStyle;
}

void Toppings::setStyle(int topStyle)
{
  if(0 < tStyle && tStyle<5)
  {
    tStyle= topStyle;
  }
  else throw std::runtime_error("Invalid topping style");
}
