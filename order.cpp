#include "order.h"
#include <iostream>

namespace Mice {

    int Order::_next_id = 1;

    Order::Order(Customer customer)
        : _customer{customer}, _id{_next_id++}, _state{Order_state::Unfilled} { }
    void Order::add_serving(Serving serving) {_servings.push_back(serving);}
    std::vector<Serving> Order::servings() const {return _servings;}

    void Order::fill(Server server) {
        server.fill_order_and_pay();
        _state= Order_state::Filled;
     }
    void Order::pay() {
      _state= Order_state::Paid;

    }
    void Order::cancel() {
      _state= Order_state::Canceled;
    }

    int Order::id() const {return _id;}
    double Order::cost() const {
      double cs;
      for(int i=0; i<_servings.size(); i++){
          cs+=_servings[i].cost();
      }
      return cs;
    }
    double Order::price() const {
      double ps;
      for(int i=0; i<_servings.size(); i++){
        ps+=_servings[i].price();
      }
      return ps;
    }
    Order_state Order::state() const {return _state;}
}

// OPERATOR OVERLOADING for class Order
std::ostream& operator<<(std::ostream& os, const Mice::Order& order) {
    std::string nlnl = "";
    for (Mice::Serving s : order.servings()) {os << nlnl << s; nlnl = "\n\n";}
    return os;
}
