#include "cashregister.h"

 namespace Mice{

 double CashRegister::get_money() {
  return cash;
 }

 void CashRegister::pay_ser(Server server) {
   cash-=server.salary();
 }

 void CashRegister::re_stock(Item item) {
   cash-= item.cost();
 }

 void CashRegister::recieve_pay(Order order) {
   cash += order.price();
 }

}
