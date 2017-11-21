#include "mainwin.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Mainwin::on_profit_click(){
  std::string prof;


  std::stringstream op,od;
  op<<_emp->order_profit();
  for(int i=0; i<_emp->num_orders(); i++){
  od<<_emp->order(i)<< std::endl;
  }
  Gtk::MessageDialog dialog{*this, "Profit report:"};
  dialog.set_secondary_text(od.str() +"\tTotal $"+ op.str(), true);
  dialog.run();
  dialog.close();
}

void Mainwin::on_cusre_click(){
  std::stringstream cu;
  for(int i=0; i<_emp->num_customers(); i++){
  cu<<_emp->customer(i)<<std::endl;
  }

  Gtk::MessageDialog dialog{*this, "Customer report:"};
  dialog.set_secondary_text(cu.str(), true);
  dialog.run();
  dialog.close();
}
void Mainwin::on_servre_click(){
  std::stringstream su;
  for(int i=0; i<_emp->num_servers(); i++){
  su<<_emp->server(i)<<std::endl;
  }

  Gtk::MessageDialog dialog{*this, "Server report:"};
  dialog.set_secondary_text(su.str(), true);
  dialog.run();
  dialog.close();
}


void Mainwin::on_ordrep_click(){
  std::stringstream od;
  for(int i=0; i<_emp->num_orders(); i++){
    if(_emp->order(i).state()== Mice::Order_state::Unfilled){
      od<<"Order "<<_emp->order(i).id()<<"\n"<<_emp->order(i)<<std::endl;
    }
  }
    Gtk::MessageDialog dialog{*this, "Order report:"};
    dialog.set_secondary_text(od.str(), true);
    dialog.run();
    dialog.close();
  }
