#include "controller.h"

void Controller::executeCmd(int cmd)
{
  string Name, Description;
  double wholesaleCost, retailPrice;
  int remainingStock, maximumScoops,style;
  if (cmd==1)                               //Add Item
  {
  cout<<"Enter the item's Name"<<endl;
  getline(cin,Name);
  cout<<"Enter the description of the item"<<endl;
  getline(cin,Description);
  cout<<"Enter the wholesale cost of the item"<<endl;
  cin>>wholesaleCost;
  cin.ignore();
  cout<<"Enter retail price of the item"<<endl;
  cin>>retailPrice;
  cin.ignore();
  cout<<"Enter how many units of the item are available"<<endl;
  cin>>remainingStock;
  cin.ignore();

  manager.addItem(Item(Name,Description,wholesaleCost,retailPrice,remainingStock));
  }

  if (cmd==2)                                     //Add Flavor
  {

    string name, description, a, b, c;
    double wholesaleCost, retailPrice;
    int remainingStock;
    bool cancel = false;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Flavor");

    // NAME
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // DESCRIPTION
    Gtk::HBox b_description;

    Gtk::Label l_description{"Description:"};
    l_description.set_width_chars(15);
    b_description.pack_start(l_description, Gtk::PACK_SHRINK);

    Gtk::Entry e_description;
    e_description.set_max_length(50);
    b_description.pack_start(e_description, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_description, Gtk::PACK_SHRINK);

    // WHOLESALE
    Gtk::HBox b_wholesaleCost;

    Gtk::Label l_wholesaleCost{"Whole Sale Cost:"};
    l_wholesaleCost.set_width_chars(15);
    b_wholesaleCost.pack_start(l_wholesaleCost, Gtk::PACK_SHRINK);

    Gtk::Entry e_wholesaleCost;
    e_wholesaleCost.set_max_length(50);
    b_wholesaleCost.pack_start(e_wholesaleCost, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_wholesaleCost, Gtk::PACK_SHRINK);

    // RETAIL PRICE
    Gtk::HBox b_retailPrice;

    Gtk::Label l_retailPrice{"Retail Price:"};
    l_retailPrice.set_width_chars(15);
    b_retailPrice.pack_start(l_retailPrice, Gtk::PACK_SHRINK);

    Gtk::Entry e_retailPrice;
    e_retailPrice.set_max_length(50);
    b_retailPrice.pack_start(e_retailPrice, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_retailPrice, Gtk::PACK_SHRINK);

    // remainingStock
    Gtk::HBox b_remainingStock;

    Gtk::Label l_remainingStock{"Quantity:"};
    l_remainingStock.set_width_chars(15);
    b_remainingStock.pack_start(l_remainingStock, Gtk::PACK_SHRINK);

    Gtk::Entry e_remainingStock;
    e_remainingStock.set_max_length(50);
    b_remainingStock.pack_start(e_remainingStock, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_remainingStock, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    name = e_name.get_text();
    description = e_description.get_text();
    a = e_wholesaleCost.get_text();
    b = e_retailPrice.get_text();
    c = e_remainingStock.get_text();

    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;


    manager.addScoop(Scoop(Name,Description,wholesaleCost,retailPrice,remainingStock));
  }

  if (cmd==3)                                     //Add Topping
  {

    string name, description, a, b, c;
    double wholesaleCost, retailPrice;
    int remainingStock;
    bool cancel = false;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Topping");

    // NAME
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // DESCRIPTION
    Gtk::HBox b_description;

    Gtk::Label l_description{"Description:"};
    l_description.set_width_chars(15);
    b_description.pack_start(l_description, Gtk::PACK_SHRINK);

    Gtk::Entry e_description;
    e_description.set_max_length(50);
    b_description.pack_start(e_description, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_description, Gtk::PACK_SHRINK);

    // WHOLESALE
    Gtk::HBox b_wholesaleCost;

    Gtk::Label l_wholesaleCost{"Whole Sale Cost:"};
    l_wholesaleCost.set_width_chars(15);
    b_wholesaleCost.pack_start(l_wholesaleCost, Gtk::PACK_SHRINK);

    Gtk::Entry e_wholesaleCost;
    e_wholesaleCost.set_max_length(50);
    b_wholesaleCost.pack_start(e_wholesaleCost, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_wholesaleCost, Gtk::PACK_SHRINK);

    // RETAIL PRICE
    Gtk::HBox b_retailPrice;

    Gtk::Label l_retailPrice{"Retail Price:"};
    l_retailPrice.set_width_chars(15);
    b_retailPrice.pack_start(l_retailPrice, Gtk::PACK_SHRINK);

    Gtk::Entry e_retailPrice;
    e_retailPrice.set_max_length(50);
    b_retailPrice.pack_start(e_retailPrice, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_retailPrice, Gtk::PACK_SHRINK);

    // remainingStock
    Gtk::HBox b_remainingStock;

    Gtk::Label l_remainingStock{"Quantity:"};
    l_remainingStock.set_width_chars(15);
    b_remainingStock.pack_start(l_remainingStock, Gtk::PACK_SHRINK);

    Gtk::Entry e_remainingStock;
    e_remainingStock.set_max_length(50);
    b_remainingStock.pack_start(e_remainingStock, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_remainingStock, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    name = e_name.get_text();
    description = e_description.get_text();
    a = e_wholesaleCost.get_text();
    b = e_retailPrice.get_text();
    c = e_remainingStock.get_text();

    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;

    manager.addToppings(Toppings(Name,Description,style,wholesaleCost,retailPrice,remainingStock));
  }
  if (cmd==4)                                 //Add container
  {

    string name, description, a, b, c, d;
    double wholesaleCost, retailPrice;
    int remainingStock, maximumScoops;
    bool cancel = false;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Container");

    // NAME
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // DESCRIPTION
    Gtk::HBox b_description;

    Gtk::Label l_description{"Description:"};
    l_description.set_width_chars(15);
    b_description.pack_start(l_description, Gtk::PACK_SHRINK);

    Gtk::Entry e_description;
    e_description.set_max_length(50);
    b_description.pack_start(e_description, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_description, Gtk::PACK_SHRINK);

    // WHOLESALE
    Gtk::HBox b_wholesaleCost;

    Gtk::Label l_wholesaleCost{"Whole Sale Cost:"};
    l_wholesaleCost.set_width_chars(15);
    b_wholesaleCost.pack_start(l_wholesaleCost, Gtk::PACK_SHRINK);

    Gtk::Entry e_wholesaleCost;
    e_wholesaleCost.set_max_length(50);
    b_wholesaleCost.pack_start(e_wholesaleCost, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_wholesaleCost, Gtk::PACK_SHRINK);

    // RETAIL PRICE
    Gtk::HBox b_retailPrice;

    Gtk::Label l_retailPrice{"Retail Price:"};
    l_retailPrice.set_width_chars(15);
    b_retailPrice.pack_start(l_retailPrice, Gtk::PACK_SHRINK);

    Gtk::Entry e_retailPrice;
    e_retailPrice.set_max_length(50);
    b_retailPrice.pack_start(e_retailPrice, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_retailPrice, Gtk::PACK_SHRINK);

    // remainingStock
    Gtk::HBox b_remainingStock;

    Gtk::Label l_remainingStock{"Quantity:"};
    l_remainingStock.set_width_chars(15);
    b_remainingStock.pack_start(l_remainingStock, Gtk::PACK_SHRINK);

    Gtk::Entry e_remainingStock;
    e_remainingStock.set_max_length(50);
    b_remainingStock.pack_start(e_remainingStock, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_remainingStock, Gtk::PACK_SHRINK);

    // max scoops
    Gtk::HBox b_maximumScoops;

    Gtk::Label l_maximumScoops{"Maximum Scoops:"};
    l_maximumScoops.set_width_chars(15);
    b_maximumScoops.pack_start(l_maximumScoops, Gtk::PACK_SHRINK);

    Gtk::Entry e_maximumScoops;
    e_maximumScoops.set_max_length(50);
    b_maximumScoops.pack_start(e_maximumScoops, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_maximumScoops, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    name = e_name.get_text();
    description = e_description.get_text();
    a = e_wholesaleCost.get_text();
    b = e_retailPrice.get_text();
    c = e_remainingStock.get_text();
    d = e_maximumScoops.get_text();

    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;
    stringstream dd(d);
    dd >> maximumScoops;

    manager.addContainer(Container(Name,Description,wholesaleCost,retailPrice,remainingStock,maximumScoops));
  }

  if(cmd==5)                        //Add Server
  {
    Server serves;


  }

  if (cmd==6)                     //Create Serving
  {

  }

  if(cmd==7)                      //create Order
  {

  }
}
