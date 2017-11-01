#include "item.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Item::to_string()
{

cout<<name <<", "<<desc<<" Cost to purchase: "<<"$"<<wholeCost<< " Sold for "<<"$"<<retPri<< " RemainingStock: "<<remStock<< " units"<<endl;

}
