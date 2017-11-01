#include "item.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Item::Item (string Name, string Description, double wholesaleCost, double retailPrice):
name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{0} { }

string Item::type()
{
  return "Item";
}

void Item::restock(int stock)
{
  remStock= stock;
}

void Item::consume(int stock)
{
  remStock-= stock;
}

string Item::iname()
{
  return name;
}

string Item::description()
{
 return desc;
}

double Item::cost()
{
  return wholeCost;
}

double Item::price()
{
  return retPri;
}

int Item::remainStock()
{
  return remStock;
}

void Item::to_string()
{

cout<<name <<", "<<desc<<" Cost to purchase: "<<"$"<<wholeCost<< " Sold for "<<"$"<<retPri<< " RemainingStock: "<<remStock<< " units"<<endl;

}
