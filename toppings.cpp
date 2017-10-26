#include "toppings.h"
#include <iostream>
#include <string>
using namespace std;

void Toppings::to_string()
{

cout<<name <<", "<<desc<<" Cost to purchase: "<<"$"<<wholeCost<< " Sold for "<<"$"<<retPri<< " RemainingStock: "<<remStock<< " units"<<endl;

}
