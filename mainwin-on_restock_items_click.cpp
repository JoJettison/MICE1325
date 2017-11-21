#include "mainwin.h"
#include <iostream>
#include <sstream>
#include <string>
#include <exception>
#include <stdexcept>

void Mainwin::on_restock_items_click()
{
    // /////////////////////////////
    // Select Item Type
    Gtk::Dialog dialog_type{"Select Item Type", *this};
    //dialog_type.set_title("Select Item Type");
    const int WIDTH = 15;

    // Type
    Gtk::HBox b_type;

    Gtk::Label l_type{"Type:"};
    l_type.set_width_chars(WIDTH);
    b_type.pack_start(l_type, Gtk::PACK_SHRINK);

    // TODO: Replace this with 3 large, colorful buttons
    Gtk::ComboBoxText c_type;
    c_type.set_size_request(WIDTH*10);
    const int CONTAINER = 0;
    c_type.append("Container");
    const int SCOOP = 1;
    c_type.append("Ice Cream Flavor");
    const int TOPPING = 2;
    c_type.append("Topping");
    b_type.pack_start(c_type, Gtk::PACK_SHRINK);
    dialog_type.get_vbox()->pack_start(b_type, Gtk::PACK_SHRINK);

    // Show dialog_type
    dialog_type.add_button("Cancel", 0);
    dialog_type.add_button("OK", 1);
    dialog_type.show_all();
    if (dialog_type.run() != 1) {
        dialog_type.close();
        return;
    }

    int type = c_type.get_active_row_number();

    dialog_type.close();

    // //////////////////////////////
    // Define Item

    Gtk::Dialog dialog;
    if (type == CONTAINER) 
    {
    	dialog.set_title("Restock Container");
    	int container = select_container();
    }
    else if (type == SCOOP) 
    {
    	dialog.set_title("Restock Flavor");
    	int flavor = select_scoop();
    }
    else 
    {
    	dialog.set_title("Restock Topping");
    	int topping = select_topping();
    }

    dialog.set_transient_for(*this);
    
    dialog.close();

    // /////////////////////////////
    // Quantity of Item

    Gtk::Dialog *dialog_quantity = new Gtk::Dialog();
    dialog_quantity->set_title("Quantity Restocked");

    dialog_quantity->add_button("Cancel", 0);
    dialog_quantity->add_button("OK", 1);
    dialog_quantity->set_default_response(1);

    Gtk::Entry *entry = new Gtk::Entry{};
    entry->set_text("Quantity:");
    entry->set_max_length(50);
    entry->show();
    dialog_quantity->get_vbox()->pack_start(*entry);

    int result = dialog_quantity->run();
    std::string text = entry->get_text();
    int quantity;
    std::istringstream (text) >> quantity;

    dialog_quantity->close();

    delete entry;
    delete dialog_quantity;

    //Scoop::restock(quantity);
}