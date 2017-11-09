#ifndef SERVING_H
#define SERVING_H
#include<string>
#include <vector>
#include "container.h"
#include "scoop.h"
#include "toppings.h"

using namespace std;

class Serving
{
  public:
    Serving(Container container, vector<Scoop>scoops, vector<Toppings> toppings);
    double price();


  private:
    Container contain;
    vector<Scoop> scoopList;
    vector<Toppings> toppingsList;






};
#endif
