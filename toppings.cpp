#include "toppings.h"
#include <iostream>
#include <string>
using namespace std;

Toppings::Toppings(string Name, string Description,int topStyle, double wholesaleCost, double retailPrice, int remainingStock):
Item(Name,Description,wholesaleCost,retailPrice, remainingStock), tStyle{topStyle}  { }

string Toppings::type()
{
  return "Topping";

}
