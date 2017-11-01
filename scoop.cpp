#include "scoop.h"
#include <string>
#include <iostream>
using namespace std;


Scoop::Scoop(string Name, string Description, double wholesaleCost, double retailPrice)
: Item(Name,Description,wholesaleCost,retailPrice) { }

string Scoop::type()
{
  return "Scoop";
}

// void Scoop::to_string()
// {
//
//   cout<<name<<":"<<" A scoop of "<< desc+" Cost to purchase: "<<wholeCost<<" Sold for "<<"$"<<retPri<<" RemainingStock: "<<remStock<<"scoops"<<endl;
//
// }
