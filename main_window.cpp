#include "main_window.h"

Main_window::Main_window() {

    // /////////////////
    // G U I   S E T U P
    // /////////////////

    set_default_size(400, 200);

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    // ///////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    // M A N A G E R
    // Create a Manager menu and add to the menu bar
    Gtk::MenuItem *menuitem_manage = Gtk::manage(new Gtk::MenuItem("_Manager", true));
    menubar->append(*menuitem_manage);
    Gtk::Menu *managemenu = Gtk::manage(new Gtk::Menu());
    menuitem_manage->set_submenu(*managemenu);

    // A D D   N E W   C O N T A I N E R
    // Append New Container to the Manager menu
    Gtk::MenuItem *menuitem_newContainer = Gtk::manage(new Gtk::MenuItem("_newContainer", true));
    menuitem_newContainer->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_newContainer_click));
    managemenu->append(*menuitem_newContainer);

    // A D D   N E W   F L A V O R
    // Append New Flavor to the Manager menu
    Gtk::MenuItem *menuitem_newFlavor = Gtk::manage(new Gtk::MenuItem("_newFlavor", true));
    menuitem_newFlavor->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_newFlavor_click));
    managemenu->append(*menuitem_newFlavor);

    // A D D   N E W   T O P P I N G
    // Append New Topping to the Manager menu
    Gtk::MenuItem *menuitem_newTopping = Gtk::manage(new Gtk::MenuItem("_newTopping", true));
    menuitem_newTopping->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_newTopping_click));
    managemenu->append(*menuitem_newTopping);    


    // /////////////
    // T O O L B A R
    // Add a toolbar to the vertical box below the menu
    Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar);

    //     Q U I T
    // Add a icon for quitting
    /*Gtk::ToolButton *quit_button = Gtk::manage(new Gtk::ToolButton(Gtk::Stock::QUIT));
    quit_button->set_tooltip_markup("Exit game");
    quit_button->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    Gtk::SeparatorToolItem *sep = Gtk::manage(new Gtk::SeparatorToolItem());
    sep->set_expand(true);  // The expanding sep forces the Quit button to the right
    toolbar->append(*sep);
    toolbar->append(*quit_button);*/

    // Make the box and everything in it visible
    vbox->show_all();

}

Main_window::~Main_window() { }

// /////////////////
// C A L L B A C K S
// /////////////////

void Main_window::on_newContainer_click() {
    //container->take_sticks(1);
}

void Main_window::on_newFlavor_click() {
    //scoop->take_sticks(2);
}

void Main_window::on_newTopping_click() {
    //topings->take_sticks(3);
}

/*void Main_window::on_quit_click() {
    hide();
}*/

