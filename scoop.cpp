#include "scoop.h"
#include <string>
#include <iostream>
using namespace std;


Scoop::Scoop(string Name, string Description, double wholesaleCost, double retailPrice, int RemainingStock)
 :Item(Name,Description,wholesaleCost,retailPrice, RemainingStock){ }


string Scoop::type()
{
  return "Scoop";
}
