#include"manager.h"


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

void Manager::addPerson(Person ps)
{
personList.push_back(ps);
}

void Manager::addCustomer(Customer cu)
{
customerList.push_back(cu);
}

void Manager::addServer(Server se)
{
serverList.push_back(se);
}

void Manager::addServing(Serving sr)
{
servingList.push_back(sr);
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

Toppings Manager::getToppins(int i)
{
  return toppingsList[i];
}
Scoop Manager::getScoop(int i)
{
    return scoopList[i];
}

Container Manager::getContainer(int i)
{
    return containerList[i];
}
string Manager::toppingsListing(int i)
{
  return toppingsList[i].iname(); //Returns name method of Specified toppings vector
}

double Manager::getPrice(int i)
{
  return servingList[i].price();
}

string Manager::servingToString()
{
  string con,cond, sco,scod, top,topd, all, cc, tt, ss;
  string  topp,scop,conp;
    for(int i=0; i<servingList.size(); i++)
    {

        cond= containerList[i].description();
        con= containerList[i].iname();
        //stringstream cp(containerList[i].price());
        //cp>>conp;
            cc+=con+" "+cond+" "+conp+"\n";

        for(int j =0; j<scoopList.size(); j++ )
        {
            scod=scoopList[j].description();
            sco= scoopList[j].iname();
            ss+=sco+" "+scod+"\n";

        }
        for(int k=0; k<toppingsList.size(); k++)
        {
            topd= toppingsList[k].description();
            top= toppingsList[k].iname();

            tt+=top+" "+topd+"\n";
        }

    }

    return cc+" "+ss+" "+tt;
}


void Manager::populateStuff(){}
