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

string Manager::scoopDescription(int i)
{
  return scoopList[i].description(); //Returns description of scoop
}

/*double Manager::scoopPrice(int i)
{
  return scoopList[i].retailPrice(); //Returns price of scoop
}*/

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
/*string Manager::containerDesciption(int i)
{
  return containerList[i].description();
}*/

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
string Manager::toppingsDescription(int i)
{
  return toppingsList[i].description();
}
string Manager::servingToString()
{
  string con, sco, top;
    for(int i=0; i<servingList.size(); i++)
    {
        con= containerList[i].iname();
        cout<<con<<endl;
        for(int j =0; j<scoopList.size(); j++ )
        {
            sco= scoopList[j].iname();
            cout<<sco<<endl;
        }
        for(int k=0; k<toppingsList.size(); k++)
        {
            top= toppingsList[k].iname();
            cout<<top<<endl;
        }
    }
}


void Manager::populateStuff(){}

Manager::Manager(string Name, int IDcode, string phoneNum):Person(Name,IDcode,phoneNum){}

