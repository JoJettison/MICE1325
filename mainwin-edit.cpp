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

void Mainwin::on_edit_flavor_click()
{
    const int WIDTH = 15;
    int flavor = select_scoop();

    Gtk::Dialog dialog;

    dialog.set_title("Edit Flavor");
    dialog.set_transient_for(*this);

    // Description
    Gtk::HBox b_desc;

    Gtk::Label l_desc{"Description:"};
    l_desc.set_width_chars(WIDTH);
    b_desc.pack_start(l_desc, Gtk::PACK_SHRINK);

    Gtk::Entry e_desc;
    e_desc.set_max_length(WIDTH*4);
    b_desc.pack_start(e_desc, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_desc, Gtk::PACK_SHRINK);

    // Cost
    Gtk::HBox b_cost;

    Gtk::Label l_cost{"Cost:"};
    l_cost.set_width_chars(WIDTH);
    b_cost.pack_start(l_cost, Gtk::PACK_SHRINK);

    Gtk::Entry e_cost;
    e_cost.set_max_length(WIDTH*4);
    b_cost.pack_start(e_cost, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_cost, Gtk::PACK_SHRINK);

    // Price
    Gtk::HBox b_price;

    Gtk::Label l_price{"Price:"};
    l_price.set_width_chars(WIDTH);
    b_price.pack_start(l_price, Gtk::PACK_SHRINK);

    Gtk::Entry e_price;
    e_price.set_max_length(WIDTH*4);
    b_price.pack_start(e_price, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_price, Gtk::PACK_SHRINK);

    dialog.add_button("Cancel", 0);
    dialog.add_button("OK", 1);
    dialog.show_all();

    bool valid_data = false;
    double d_cost;
    double d_price;
    int i_max_scoops;

    while(!valid_data) {
        if (dialog.run() != 1) {
            dialog.close();
            return;
        }

        // Data validation
        valid_data = true;
        try {
            d_cost = std::stod(e_cost.get_text());
        } catch(std::exception e) {
            e_cost.set_text("*** invalid cost ***");
            valid_data = false;
        }
        try {
            d_price = std::stod(e_price.get_text());
        } catch(std::exception e) {
            e_price.set_text("*** invalid price ***");
            valid_data = false;
        }
    }

    dialog.close();
    _emp->scoop(flavor).eprice(d_price);
    _emp->scoop(flavor).edescription(e_desc.get_text());
    _emp->scoop(flavor).ecost(d_cost);
}

void Mainwin::on_edit_container_click()
{
    int container = select_container();
}

void Mainwin::on_edit_topping_click()
{
    int topping = select_topping();
}
