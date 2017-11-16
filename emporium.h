#ifndef EMPORIUM_H
#define EMPORIUM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "item.h"
#include "scoop.h"
#include "container.h"
#include "topping.h"
#include "serving.h"
#include "customer.h"
#include "server.h"
#include "order.h"
#include "cashregister.h"

#include <vector>

namespace Mice{

  class Emporium {

    public:
    //void load(istream ist);
    //void save(ostream ost);
    void store_items(std::vector<Mice::Container> _containers, std::vector<Mice::Scoop> _scoops, std::vector<Mice::Topping> _toppings );
    void store_persons(std::vector<Mice::Server> _servers, std::vector<Mice::Customer> _customers);
    void store_orders(std::vector<Mice::Order> _orders);
    double order_profit();
    Scoop get_scoop(int i);
    Container get_container(int i);
    Topping get_topping(int i);
    Server get_server(int i);
    Customer get_customer(int i);


    Person get_Persons();
    void filling(Server server);
    void paying(Order order);

    private:
      double cash_register=0;
      std::vector<Mice::Container> _stocontainers;      // All defined containers
      std::vector<Mice::Scoop> _stoscoops;              // All defined scoops
      std::vector<Mice::Topping> _stotoppings;          // All defined toppings
      std::vector<Mice::Order> _stoorders;              // All defined orders
      std::vector<Mice::Server> _stoservers;            // All defined servers
      std::vector<Mice::Customer> _stocustomers;

  };

}

#endif
