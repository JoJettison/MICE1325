#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include "item.h"
#include "order.h"
#include "server.h"
#include "person.h"

namespace Mice{

class CashRegister{
  public:
    void pay_ser(Server server);
    void re_stock(Item item);
    void recieve_pay(Order order);
    double get_money();

private:
  double cash= 0;
};


}

#endif
