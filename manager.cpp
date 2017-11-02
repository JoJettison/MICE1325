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


void Manager::populateStuff(){}
