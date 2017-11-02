#include "controller.h"

void Controller::executeCmd(int cmd)
{
  string Name, Description;
  double wholesaleCost, retailPrice;
  int remainingStock, maximumScoops,style;
  if (cmd==1)
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

  if (cmd==2)
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

  if (cmd==3)
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
  if (cmd==4)
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

  if (cmd == 5)
  {

    int numServings, i;
    string serving, a;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Order");

    Gtk::HBox b_numServings;

    Gtk::Label l_numServings{"Number of Servings:"};
    l_numServings.set_width_chars(15);
    b_numServings.pack_start(l_numServings, Gtk::PACK_SHRINK);

    Gtk::Entry e_numServings;
    e_numServings.set_max_length(50);
    b_numServings.pack_start(e_numServings, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_numServings, Gtk::PACK_SHRINK);

    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    a = e_numServings.get_text();

    stringstream aa(a);
    aa >> numServings;

    if(numServings > 0)
    {
    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Order");

    Gtk::HBox b_serving;

    for(i = 0; i < numServings; i++)
    {
        Gtk::Label l_serving{"Serving:"};
        l_serving.set_width_chars(15);
        b_serving.pack_start(l_serving, Gtk::PACK_SHRINK);


        Gtk::ComboBoxText c_serving;
        c_serving.set_size_request(160);
        c_serving.append("Waffle Cone");
        c_serving.append("Cup");
        b_serving.pack_start(c_serving, Gtk::PACK_SHRINK);
        dialog->get_vbox()->pack_start(b_serving, Gtk::PACK_SHRINK);
    }

    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();
    }
  }

  if (cmd == 6)
  {

  }

  if (cmd == 7)
  {

  }

  if (cmd == 8)
  {
    string container, flavor, topping, toppingQuantity, phoneNum;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Serving");

    Gtk::HBox b_container;

    Gtk::Label l_container{"Container:"};
    l_container.set_width_chars(15);
    b_container.pack_start(l_container, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_container;
    c_container.set_size_request(160);
    c_container.append("Waffle Cone");
    c_container.append("Cup");
    b_container.pack_start(c_container, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_container, Gtk::PACK_SHRINK);

    Gtk::HBox b_flavor;

    Gtk::Label l_flavor{"Flavor:"};
    l_flavor.set_width_chars(15);
    b_flavor.pack_start(l_flavor, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_flavor;
    c_flavor.set_size_request(160);
    c_flavor.append("Chocolate");
    c_flavor.append("Vanilla");
    b_flavor.pack_start(c_flavor, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_flavor, Gtk::PACK_SHRINK);

    Gtk::HBox b_topping;

    Gtk::Label l_topping{"Topping:"};
    l_topping.set_width_chars(15);
    b_topping.pack_start(l_topping, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_topping;
    c_topping.set_size_request(160);
    c_topping.append("Sprinkles");
    c_topping.append("Syrup");
    b_topping.pack_start(c_topping, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_topping, Gtk::PACK_SHRINK);

    Gtk::HBox b_quantity;

    Gtk::Label l_quantity{"Topping Quantity:"};
    l_quantity.set_width_chars(15);
    b_quantity.pack_start(l_quantity, Gtk::PACK_SHRINK);

    Gtk::ComboBoxText c_quantity;
    c_quantity.set_size_request(160);
    c_quantity.append("None");
    c_quantity.append("Light");
    c_quantity.append("Normal");
    c_quantity.append("Extra");
    c_quantity.append("Drenched");
    b_quantity.pack_start(c_quantity, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_quantity, Gtk::PACK_SHRINK);

    Gtk::HBox b_phoneNum;

    Gtk::Label l_phoneNum{"Customer's Phone Number:"};
    l_phoneNum.set_width_chars(15);
    b_phoneNum.pack_start(l_phoneNum, Gtk::PACK_SHRINK);

    Gtk::Entry e_phoneNum;
    e_phoneNum.set_max_length(50);
    b_phoneNum.pack_start(e_phoneNum, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_phoneNum, Gtk::PACK_SHRINK);

    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();
  }

  if (cmd == 9)
  {

  }

}
