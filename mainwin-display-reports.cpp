#include "mainwin.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Mainwin::on_profit_click(){
  std::string prof;
  emporium.store_persons(_servers, _customers);
  emporium.store_orders(_orders);

  std::stringstream op,od;
  op<<emporium.order_profit();
  for(int i=0; i<_orders.size(); i++){
  od<<_orders[i]<< std::endl;
  }
  Gtk::MessageDialog dialog{*this, "Profit report:"};
  dialog.set_secondary_text(od.str() +"\tTotal $"+ op.str(), true);
  dialog.run();
  dialog.close();
}

void Mainwin::on_cusre_click(){
  std::stringstream cu;
    emporium.store_persons(_servers, _customers);
  for(int i=0; i<_customers.size(); i++){
    cu<<_customers[i]<<std::endl;
  }

  Gtk::MessageDialog dialog{*this, "Customer report:"};
  dialog.set_secondary_text(cu.str(), true);
  dialog.run();
  dialog.close();
}
void Mainwin::on_servre_click(){
  std::stringstream su;
    emporium.store_persons(_servers, _customers);
  for(int i=0; i<_servers.size(); i++){
    su<<_servers[i]<<std::endl;
  }

  Gtk::MessageDialog dialog{*this, "Server report:"};
  dialog.set_secondary_text(su.str(), true);
  dialog.run();
  dialog.close();
}
