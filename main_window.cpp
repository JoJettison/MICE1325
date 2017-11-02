#include "main_window.h"

Main_window::Main_window(Controller controller):controller(controller)
{
    set_default_size(800,600);
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));

    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    Gtk::MenuItem *menuitem_new = Gtk::manage(new Gtk::MenuItem("_New Emporium", true));

    filemenu->append(*menuitem_new);

    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);

    Gtk::MenuItem *menuitem_create = Gtk::manage(new Gtk::MenuItem("_Create", true));
    menubar->append(*menuitem_create);
    Gtk::Menu *createmenu = Gtk::manage(new Gtk::Menu());
    menuitem_create->set_submenu(*createmenu);

    Gtk::MenuItem *menuitem_serving = Gtk::manage(new Gtk::MenuItem("_Serving...", true));
    menuitem_serving->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_serving_click));
    createmenu->append(*menuitem_serving);

    Gtk::MenuItem *menuitem_order = Gtk::manage(new Gtk::MenuItem("_Order...", true));
    menuitem_order->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_order_click));
    createmenu->append(*menuitem_order);

    Gtk::MenuItem *menuitem_customer = Gtk::manage (new Gtk::MenuItem("_Customer...", true));
    menuitem_customer->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_customer_click));
    createmenu->append(*menuitem_customer);

    /*Gtk::MenuItem *menuitem_item = Gtk::manage (new Gtk::MenuItem("_Item...", true));
    menuitem_item->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_item_click));
    createmenu->append(*menuitem_item);*/

    Gtk::MenuItem *menuitem_container = Gtk::manage (new Gtk::MenuItem("_Container...", true));
    menuitem_container->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_container_click));
    createmenu->append(*menuitem_container);

    Gtk::MenuItem *menuitem_flavor = Gtk::manage (new Gtk::MenuItem("_Flavor...", true));
    menuitem_flavor->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_flavor_click));
    createmenu->append(*menuitem_flavor);

    Gtk::MenuItem *menuitem_topping = Gtk::manage (new Gtk::MenuItem("_Topping...", true));
    menuitem_topping->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_topping_click));
    createmenu->append(*menuitem_topping);

    Gtk::MenuItem *menuitem_server = Gtk::manage (new Gtk::MenuItem("_Sever...", true));
    menuitem_server->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_server_click));
    createmenu->append(*menuitem_server);

    Gtk::MenuItem *menuitem_display = Gtk::manage(new Gtk::MenuItem("_Display", true));
    menubar->append(*menuitem_display);
    Gtk::Menu *displaymenu = Gtk::manage(new Gtk::Menu());
    menuitem_display->set_submenu(*displaymenu);

    Gtk::MenuItem *menuitem_servingDis = Gtk::manage(new Gtk::MenuItem("_Serving", true));
    menuitem_servingDis->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_servingDis_click));
    displaymenu->append(*menuitem_servingDis);

    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));

    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("About", true));
    menuitem_help->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_about_click));
    helpmenu->append(*menuitem_about);

    Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar);

    vbox->show_all();
}

Main_window::~Main_window() {}

void Main_window::on_quit_click()
{
    hide();
}

void Main_window::on_serving_click()
{
    controller.executeCmd(8);
}

void Main_window::on_order_click()
{
    controller.executeCmd(5);
}

void Main_window::on_customer_click()
{
    //controller.executeCmd(6);
}

void Main_window::on_container_click()
{
    controller.executeCmd(4);
}

void Main_window::on_flavor_click()
{
    controller.executeCmd(2);
}

void Main_window::on_topping_click()
{
    controller.executeCmd(3);
}

void Main_window::on_server_click()
{
    //controller.executeCmd(7);
}

void Main_window::on_servingDis_click()
{
    //controller.executeCmd(9);
}

void Main_window::on_about_click()
{
  controller.executeCmd(10);
}
