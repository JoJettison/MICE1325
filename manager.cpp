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


vector<Scoop> Manager::getScoops()   //Returns Vector of scoops
{
  return scoopList;
}
string Manager::scoopListing(int i)
{
  return scoopList[i].iname(); //Returns name method of Specified scoop vector
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

vector<Person> Manager::getPersons()   //Returns Vector of people
{
  return personList;
}
string Manager::personListing(int i)
{
  return personList[i].pname(); //Returns name method of Specified person vector
}

vector<Server> Manager::getServers()   //Returns Vector of server
{
  return serverList;
}
string Manager::serverListing(int i)
{
  return serverList[i].pname(); //Returns name method of Specified server vector
}

vector<Customer> Manager::getCustomers()   //Returns Vector of customers
{
  return customerList;
}

string Manager::customerListing(int i)
{
  return customerList[i].pname(); //Returns name method of Specified customers vector
}






void Manager::populateStuff(){}
