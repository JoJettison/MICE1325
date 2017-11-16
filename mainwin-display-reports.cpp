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
