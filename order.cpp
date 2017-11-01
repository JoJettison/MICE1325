#include "order.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Order::Order(int ordernumber, vector<Serving> Servings, Server server, Customer customer):
  orderID{ordernumber}, servingList{Servings}, serve{server}, custom{customer}, status{0} {}


  int Order::getStatus()
  {
    return status;
  }

string Order::getStatusStr(){
  string stat;
  switch (status) {
    case 0: stat= "UNFILLED";
    case 1: stat= "FILLED";
    case 2: stat= "PAID";
  }
  return stat;
 }

 Customer Order::getCustomer()
 {
   return custom;
 }

  Server Order::getServer()
 {
   return serve;
 }

int Order::orderNum()
{
  return orderID;
}

double Order::orderPrice()
{
  double ordsum;
  for(int i=0; i<servingList.size(); i++)
  {
      ordsum+= servingList[i].price();
  }
  return ordsum;
}

void Order::fillOrder(Server sever)
{

}

void payOrder()
{

}

void cancelOrder()
{

}
