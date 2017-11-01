#include "serving.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Serving::Serving(Container container, vector<Scoop>scoops, vector<Toppings> toppings):
  contain{container}, scoopList{scoops}, toppingsList{toppings} {}

double Serving::price()
{
   double scoopSum, toppingsSum;

    for (int i=0; i<scoopList.size(); i++)
    {
      scoopSum += scoopList[i].price();
    }
    for(int j=0; j<toppingsList.size(); j++)
    {
      toppingsSum+= toppingsList[j].price();
    }
    return scoopSum + toppingsSum + contain.price();
  }
