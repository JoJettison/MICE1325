#ifndef MANAGER_H
#define MANAGER_H
#include"item.h"
#include"scoop.h"
#include"toppings.h"
#include"container.h"

#include <vector>
#include<string>
#include <iostream>
using namespace std;

class Manager
{
  public:
    void addItem(Item it);
    void addScoop(Scoop sc);
    void addContainer(Container co);
    void addToppings(Toppings ts);
    void itemListing();

    void populateStuff();

  private:
    vector<Item> itemList;
    vector<Scoop> scoopList;
    vector<Container> containerList;
    vector<Toppings> toppingsList;

};
#endif
