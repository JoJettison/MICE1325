#include"manager.h"
#include"item.h"
#include"scoop.h"
#include"toppings.h"
#include"container.h"

void Manager::addItem(Item it)
{
itemList.push_back(it);
}
void Manager::addScoop(Scoop sc)
{
scoopList.push_back(sc);
}
void Manager::addContainer(Container co)
{
containerList.push_back(co);
}
void Manager::addToppings(Toppings ts)
{
toppingsList.push_back(ts);
}
vector<Scoop> Manager::getScoops()   //Returns Vector of scoops
{
  return scoopList;
}
string Manager::scoopListing(int i)
{
  return scoopList[i].iname(); //Returns name method of Specified scoop vector
}

int Manager::getMaxScoops(int i)
{
  return containerList[i].maximScoops();
}
vector<Container> Manager::getContainers()   //Returns Vector of containers
{
  return containerList;
}
string Manager::containerListing(int i)
{
  return containerList[i].iname(); //Returns name method of Specified container vector
}

vector<Toppings> Manager::getToppings()   //Returns Vector of toppings
{
  return toppingsList;
}
string Manager::toppingsListing(int i)
{
  return toppingsList[i].iname(); //Returns name method of Specified toppings vector
}


void Manager::populateStuff(){}
