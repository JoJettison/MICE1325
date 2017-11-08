#ifndef MANAGER_H
#define MANAGER_H
#include"item.h"
#include"scoop.h"
#include"toppings.h"
#include"container.h"
#include "person.h"
#include "server.h"
#include "customer.h"
#include "serving.h"

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
    void addPerson(Person pe);
    void addCustomer(Customer cu);
    void addServer(Server se);
    void addServing(Serving se);

    vector<Scoop> getScoops();
    vector<Container> getContainers();
    vector<Toppings> getToppings();
    Toppings getToppins(int i);
    Scoop getScoop(int i);
    Container getContainer(int i);

    vector<Item> getItems();
    vector<Person> getPersons();
    vector<Server> getServers();
    vector<Customer> getCustomers();
    vector<Serving> getServings();

    string itemListing(int i);
    string scoopListing(int i);
    string containerListing(int i);
    string toppingsListing(int i);
    int getMaxScoops(int i);
    string personListing(int i);
    string customerListing(int i);
    string serverListing(int i);
    string servingToString();


    void populateStuff();

  private:
    vector<Item> itemList;
    vector<Scoop> scoopList;
    vector<Container> containerList;
    vector<Toppings> toppingsList;
    vector<Person> personList;
    vector<Customer> customerList;
    vector<Server> serverList;
    vector<Serving> servingList;


};
#endif
