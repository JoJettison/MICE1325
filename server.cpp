#include "server.h"
#include <iomanip>
#include <iostream>

namespace Mice {
Server::Server(std::string name, std::string id, std::string phone, double salary)
             : Person(name, id, phone), _salary{salary}, _num_orders{0} { }
bool Server::fill_order_and_pay() {
    ++_num_orders;
    return (_num_orders % PAY_PERIOD) == 0;
}
bool Server::restock_and_pay() {
    _num_orders += 2;
    return ((_num_orders % PAY_PERIOD) == 0)
       || (((_num_orders - 1) % PAY_PERIOD) == 0);
}
double Server::pay_server() { }
int Server::num_orders() const {return _num_orders;}
double Server::salary() const {return _salary;}
void Server::set_salary(double s) {
	_salary = s;
}
}

std::ostream& operator<<(std::ostream& os, const Mice::Server& server) {
    os << std::setw(40) << server.name() << ": "
       << std::setprecision(2) << std::fixed << server.id() <<" "<<
       server.num_orders()<<" Paid "<< server.salary();
    return os;
  }
