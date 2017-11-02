#include "container.h"
#include <iostream>
#include <string>
using namespace std;

#include "container.h"
#include <iostream>
#include <string>
using namespace std;

Container::Container(string Name, string Description, double wholesaleCost, double retailPrice,int RemainingStock, int maximumScoops):
Item(Name,Description,wholesaleCost,retailPrice, RemainingStock),maxScoops{maximumScoops} { }


string Container::type()
{
 return "Container";
}


int Container::maximScoops()
{
 return maxScoops;
}
