#include "emporium.h"

namespace Mice{


void Emporium::store_items(std::vector<Mice::Container> _containers ,std::vector<Mice::Scoop> _scoops, std::vector<Mice::Topping> _toppings)
{
    for(int i=0; i<_containers.size(); i++){
        _stocontainers.push_back(_containers[i]);
    }
    for(int i=0; i< _scoops.size(); i++){
      _stoscoops.push_back(_scoops[i]);
    }
    for(int i=0; i<_toppings.size(); i++){
      _stotoppings.push_back(_toppings[i]);
    }
}

void Emporium::store_persons(std::vector<Mice::Server> _servers, std::vector<Mice::Customer> _customers)
{
  for(int i=0; i<_customers.size(); i++){
    _stocustomers.push_back(_customers[i]);
  }
  for(int i=0; i<_servers.size(); i++){
    _stoservers.push_back(_servers[i]);
  }

}

void Emporium::store_orders(std::vector<Mice::Order> _orders){
  for(int i=0; i<_orders.size(); i++){
    _stoorders.push_back(_orders[i]);
  }
}

double Emporium::order_profit(){
  double pf;
  for(int i=0; i<_stoorders.size(); i++){
    pf += _stoorders[i].price() - _stoorders[i].cost()+_stoservers[i].salary();
  }
  return pf;
}

Scoop Emporium::get_scoop(int i){ return _stoscoops[i];}
Container Emporium::get_container(int i){return _stocontainers[i];}
Topping Emporium::get_topping(int i){return _stotoppings[i];}
Server Emporium::get_server(int i){return _stoservers[i];}
Customer Emporium::get_customer(int i){return _stocustomers[i];}
}
