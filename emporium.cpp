#include "emporium.h"

namespace Mice{


void Emporium::store_items(std::vector<Mice::Container> _containers ,std::vector<Mice::Scoop> _scoops, std::vector<Mice::Topping> _toppings){
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

void Emporium::store_persons(std::vector<Mice::Server> _servers, std::vector<Mice::Customer> _customers){
  for(int i=0; i<_customers.size(); i++){
    _stocustomers.push_back(_customers[i]);
  }
  for(int i=0; i<_servers.size(); i++){
    _stoservers.push_back(_servers[i]);
  }

}

}
