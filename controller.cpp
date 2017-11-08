#include "controller.h"

void Controller::executeCmd(int cmd)
{

  if (cmd==1)
  {
    string Name, Description;
    double wholesaleCost, retailPrice;
    int remainingStock, maximumScoops;
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


    manager.addScoop(Scoop(name,description,wholesaleCost,retailPrice,remainingStock));
  }

  if (cmd==3)
  {

    string name, description, a, b, c;
    double wholesaleCost, retailPrice;
    int remainingStock,style;
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

    manager.addToppings(Toppings(name,description,style,wholesaleCost,retailPrice,remainingStock));
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

    manager.addContainer(Container(name,description,wholesaleCost,retailPrice,remainingStock,maximumScoops));
  }

  if (cmd == 5)
  {
    string orderID, servings, server, customer;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Order");

    // ORDER ID
    Gtk::HBox b_name;

    Gtk::Label l_name{"Order ID:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

dialog->close();
  }

  if (cmd == 6)
  {

    string name, phoneNum, a;
    int ID;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Customer");

    // NAME
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // PHONE NUMBER
    Gtk::HBox b_phoneNum;

    Gtk::Label l_phoneNum{"Phone Number:"};
    l_phoneNum.set_width_chars(15);
    b_phoneNum.pack_start(l_phoneNum, Gtk::PACK_SHRINK);

    Gtk::Entry e_phoneNum;
    e_phoneNum.set_max_length(50);
    b_phoneNum.pack_start(e_phoneNum, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_phoneNum, Gtk::PACK_SHRINK);

    // ID
    Gtk::HBox b_ID;

    Gtk::Label l_ID{"ID:"};
    l_ID.set_width_chars(15);
    b_ID.pack_start(l_ID, Gtk::PACK_SHRINK);

    Gtk::Entry e_ID;
    e_ID.set_max_length(50);
    b_ID.pack_start(e_ID, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_ID, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    name = e_name.get_text();
    phoneNum = e_phoneNum.get_text();
    a = e_ID.get_text();

    stringstream aa(a);
    aa >> ID;
  }

  if (cmd == 7)
  {
    string name, phoneNum, a;
    int ID;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Server");

    // NAME
    Gtk::HBox b_name;

    Gtk::Label l_name{"Name:"};
    l_name.set_width_chars(15);
    b_name.pack_start(l_name, Gtk::PACK_SHRINK);

    Gtk::Entry e_name;
    e_name.set_max_length(50);
    b_name.pack_start(e_name, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_name, Gtk::PACK_SHRINK);

    // PHONE NUMBER
    Gtk::HBox b_phoneNum;

    Gtk::Label l_phoneNum{"Phone Number:"};
    l_phoneNum.set_width_chars(15);
    b_phoneNum.pack_start(l_phoneNum, Gtk::PACK_SHRINK);

    Gtk::Entry e_phoneNum;
    e_phoneNum.set_max_length(50);
    b_phoneNum.pack_start(e_phoneNum, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_phoneNum, Gtk::PACK_SHRINK);

    // ID
    Gtk::HBox b_ID;

    Gtk::Label l_ID{"ID:"};
    l_ID.set_width_chars(15);
    b_ID.pack_start(l_ID, Gtk::PACK_SHRINK);

    Gtk::Entry e_ID;
    e_ID.set_max_length(50);
    b_ID.pack_start(e_ID, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_ID, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();

    name = e_name.get_text();
    phoneNum = e_phoneNum.get_text();
    a = e_ID.get_text();

    stringstream aa(a);
    aa >> ID;
  }

    if (cmd==8)         //Create Serving
    {
    int container, maxScoop, topping;
    string conList, scoList, topList, toppingQuantity;

    // C O N T A I N E R   D I A L O G
    //////////////////////////////////
        Gtk::Dialog *containerDia = new Gtk::Dialog();
        containerDia->set_title("Create Serving");

            Gtk::HBox b_container;

            Gtk::Label l_container{"Container:"};
            l_container.set_width_chars(15);
            b_container.pack_start(l_container, Gtk::PACK_SHRINK);

            Gtk::ComboBoxText c_container;
            c_container.set_size_request(160);
            for(int i=0; i<manager.getContainers().size(); i++)
            {
                stringstream aa(manager.containerListing(i));
                aa>>conList;
                c_container.append(conList);
            }

            b_container.pack_start(c_container, Gtk::PACK_SHRINK);
            containerDia->get_vbox()->pack_start(b_container, Gtk::PACK_SHRINK);

        containerDia->add_button("Cancel", 0);
        containerDia->add_button("OK", 1);
        containerDia->show_all();
        int resultCont = containerDia->run();

        containerDia->close();
        containerDia->hide();
        container = c_container.get_active_row_number();
        maxScoop = manager.getMaxScoops(container);
        int flavor[maxScoop];

    // F L A V O R   D I A L O G
    ////////////////////////////
        for(int i = 0; i < maxScoop; i++)
        {
            Gtk::Dialog *flavorDia = new Gtk::Dialog();
            flavorDia->set_title("Create Serving");    

                Gtk::HBox b_flavor;

                Gtk::Label l_flavor{"Flavor"};
                l_flavor.set_width_chars(15);
                b_flavor.pack_start(l_flavor, Gtk::PACK_SHRINK);

                    Gtk::ComboBoxText c_flavor;
                    c_flavor.set_size_request(160);
                    for(int i=0; i<manager.getScoops().size(); i++)
                    {
                        stringstream bb(manager.scoopListing(i));
                        bb >> scoList;
                        c_flavor.append(scoList);
                    }             
                b_flavor.pack_start(c_flavor, Gtk::PACK_SHRINK);
                flavorDia->get_vbox()->pack_start(b_flavor, Gtk::PACK_SHRINK);

            flavorDia->add_button("Cancel", 0);
            flavorDia->add_button("OK", 1);
            flavorDia->show_all();
            int resultFlav = flavorDia->run();

            flavorDia->close();
            flavorDia->hide();
            flavor[i] = c_flavor.get_active_row_number();
        }



    // T O P P I N G   D I A L O G
    ////////////////////////////
        Gtk::Dialog *toppingDia = new Gtk::Dialog();
        toppingDia->set_title("Create Serving");

        Gtk::HBox b_topping;

        Gtk::Label l_topping{"Topping:"};
        l_topping.set_width_chars(15);
        b_topping.pack_start(l_topping, Gtk::PACK_SHRINK);

        Gtk::ComboBoxText c_topping;
        c_topping.set_size_request(160);
        for(int i=0; i<manager.getToppings().size(); i++)
        {
            stringstream cc(manager.toppingsListing(i));
            cc >> topList;
            c_topping.append(topList);
        }
        b_topping.pack_start(c_topping, Gtk::PACK_SHRINK);
        toppingDia->get_vbox()->pack_start(b_topping, Gtk::PACK_SHRINK);

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
        toppingDia->get_vbox()->pack_start(b_quantity, Gtk::PACK_SHRINK);

        toppingDia->add_button("Cancel", 0);
        toppingDia->add_button("OK", 1);
        toppingDia->show_all();
        int resultTopp = toppingDia->run();

        toppingDia->close();  
        toppingDia->hide(); 
        topping = c_topping.get_active_row_number();

    }

    if (cmd == 9)
    {
    string container, flavor, topping, toppingQuantity, phoneNum, orderID;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Display Serving");

    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();
    }

}