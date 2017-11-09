#include"emporium.h"



void Emporium::addItem(Item it)
{
itemList.push_back(it);
}
void Emporium::addScoop(Scoop sc)
{
scoopList.push_back(sc);
}
void Emporium::addContainer(Container co)
{
containerList.push_back(co);
}
void Emporium::addToppings(Toppings ts)
{
toppingsList.push_back(ts);
}

void Emporium::addPerson(Person ps)
{
personList.push_back(ps);
}

void Emporium::addCustomer(Customer cu)
{
customerList.push_back(cu);
}

void Emporium::addServer(Server se)
{
serverList.push_back(se);
}

void Emporium::addServing(Serving sr)
{
servingList.push_back(sr);
}

vector<Scoop> Emporium::getScoops()   //Returns Vector of scoops
{
  return scoopList;
}

string Emporium::scoopListing(int i)
{
  return scoopList[i].iname(); //Returns name method of Specified scoop vector
}

int Emporium::getMaxScoops(int i)
{
  return containerList[i].maximScoops();
}
vector<Container> Emporium::getContainers()   //Returns Vector of containers
{
  return containerList;
}
string Emporium::containerListing(int i)
{
  return containerList[i].iname(); //Returns name method of Specified container vector
}

vector<Toppings> Emporium::getToppings()   //Returns Vector of toppings
{
  return toppingsList;
}

Toppings Emporium::getToppins(int i)
{
  return toppingsList[i];
}
Scoop Emporium::getScoop(int i)
{
    return scoopList[i];
}

Container Emporium::getContainer(int i)
{
    return containerList[i];
}
string Emporium::toppingsListing(int i)
{
  return toppingsList[i].iname(); //Returns name method of Specified toppings vector
}

double Emporium::getPrice(int i)
{
  return servingList[i].price();
}

string Emporium::servingToString()
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


void Emporium::populateStuff(){}