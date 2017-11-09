#include "main_window.h"

Main_window::Main_window(Controller controller):controller(controller)
{

    // C R E A T E   T H E   W I N D O W
    ////////////////////////////////////
    set_default_size(800,600);
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);


    // C R E A T E   T H E   M E N U B A R
    //////////////////////////////////////
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);


    // C R E A T E   A N D   A P P E N D   F I L E   T O   M E N U B A R
    ////////////////////////////////////////////////////////////////////
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    // C R E A T E   A N D   A P P E N D   N E W   E M P O R I U M   T O   F I L E   M E N U
    Gtk::MenuItem *menuitem_new = Gtk::manage(new Gtk::MenuItem("_New Emporium", true));
    filemenu->append(*menuitem_new);
    // C R E A T E   A N D   A P P E N D   S A V E   T O   F I L E   M E N U
    Gtk::MenuItem *menuitem_save = Gtk::manage(new Gtk::MenuItem("_Save", true));
    menuitem_save->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_save_click));
    filemenu->append(*menuitem_save);
    // C R E A T E   A N D   A P P E N D   L O A D   T O   F I L E   M E N U
    Gtk::MenuItem *menuitem_load = Gtk::manage(new Gtk::MenuItem("_Load", true)); 
    menuitem_load->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_load_click));
    filemenu->append(*menuitem_load);   
    // C R E A T E   A N D   A P P E N D   Q U I T   T O   F I L E   M E N U
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);


    // C R E A T E   A N D   A P P E N D   C R E A T E   T O   M E N U B A R
    ////////////////////////////////////////////////////////////////////////
    Gtk::MenuItem *menuitem_create = Gtk::manage(new Gtk::MenuItem("_Create", true));
    menubar->append(*menuitem_create);
    Gtk::Menu *createmenu = Gtk::manage(new Gtk::Menu());
    menuitem_create->set_submenu(*createmenu);

    // C R E A T E   A N D   A P P E N D   N E W   S E R V I N G   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_serving = Gtk::manage(new Gtk::MenuItem("_New Serving", true));
    menuitem_serving->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_serving_click));
    createmenu->append(*menuitem_serving);
    // C R E A T E   A N D   A P P E N D   N E W   O R D E R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_order = Gtk::manage(new Gtk::MenuItem("_New Order", true));
    menuitem_order->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_order_click));
    createmenu->append(*menuitem_order);
    // C R E A T E   A N D   A P P E N D   N E W   C U S T O M E R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_customer = Gtk::manage (new Gtk::MenuItem("_New Customer", true));
    menuitem_customer->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_customer_click));
    createmenu->append(*menuitem_customer);
    // C R E A T E   A N D   A P P E N D   N E W   I T E M   T O   C R E A T E   M E N U
    /*Gtk::MenuItem *menuitem_item = Gtk::manage (new Gtk::MenuItem("_New Item", true));
    menuitem_item->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_item_click));
    createmenu->append(*menuitem_item);*/
    // C R E A T E   A N D   A P P E N D   N E W   C O N T A I N E R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_container = Gtk::manage (new Gtk::MenuItem("_New Container", true));
    menuitem_container->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_container_click));
    createmenu->append(*menuitem_container);
    // C R E A T E   A N D   A P P E N D   N E W   F L A V O R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_flavor = Gtk::manage (new Gtk::MenuItem("_New Flavor", true));
    menuitem_flavor->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_flavor_click));
    createmenu->append(*menuitem_flavor);
    // C R E A T E   A N D   A P P E N D   N E W   T O P P I N G   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_topping = Gtk::manage (new Gtk::MenuItem("_New Topping", true));
    menuitem_topping->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_topping_click));
    createmenu->append(*menuitem_topping);
    // C R E A T E   A N D   A P P E N D   N E W   S E R V E R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_server = Gtk::manage (new Gtk::MenuItem("_New Server", true));
    menuitem_server->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_server_click));
    createmenu->append(*menuitem_server);
    // C R E A T E   A N D   A P P E N D   N E W   M A N A G E R   T O   C R E A T E   M E N U
    Gtk::MenuItem *menuitem_manager = Gtk::manage (new Gtk::MenuItem("_New Manager", true));
    menuitem_manager->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_manager_click));
    createmenu->append(*menuitem_manager);      


    // C R E A T E   A N D   A P P E N D   D I S P L A Y   T O   M E N U B A R
    //////////////////////////////////////////////////////////////////////////
    Gtk::MenuItem *menuitem_display = Gtk::manage(new Gtk::MenuItem("_Display", true));
    menubar->append(*menuitem_display);
    Gtk::Menu *displaymenu = Gtk::manage(new Gtk::Menu());
    menuitem_display->set_submenu(*displaymenu);

    // C R E A T E   A N D   A P P E N D   S E R V I N G   T O   D I S P L A Y   M E N U
    Gtk::MenuItem *menuitem_servingDis = Gtk::manage(new Gtk::MenuItem("_Serving", true));
    menuitem_servingDis->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_servingDis_click));
    displaymenu->append(*menuitem_servingDis);


    // C R E A T E   A N D   A P P E N D   M A N A G E   T O   M E N U B A R
    ////////////////////////////////////////////////////////////////////////
    Gtk::MenuItem *menuitem_manageStat = Gtk::manage(new Gtk::MenuItem("_Manage", true));
    menubar->append(*menuitem_manageStat);
    Gtk::Menu *manageStatmenu = Gtk::manage(new Gtk::Menu());
    menuitem_manageStat->set_submenu(*manageStatmenu);

    // C R E A T E   A N D   A P P E N D   O R D E R S T A T   T O   M A N A G E   M E N U
    Gtk::MenuItem *menuitem_orderstat = Gtk::manage(new Gtk::MenuItem("_Order Status", true));
    menuitem_orderstat->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_orderstat_click));
    manageStatmenu->append(*menuitem_orderstat);


    // C R E A T E   A N D   A P P E N D   H E L P   T O   M E N U B A R
    ////////////////////////////////////////////////////////////////////
    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

    // C R E A T E   A N D   A P P E N D   A B O U T   T O   H E L P   M E N U
    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("About", true));
    helpmenu->append(*menuitem_about);


    // C R E A T E   T H E   T O O L B A R
    //////////////////////////////////////
    Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar);


    // D I S P L A Y   T H E   W I N D O W
    //////////////////////////////////////
    vbox->show_all();
}


Main_window::~Main_window() {}


// C A L L B A C K S
////////////////////
void Main_window::on_quit_click()
{
    hide();
}

void Main_window::on_order_click()
{
    controller.executeCmd(5);
}

void Main_window::on_serving_click()
{
    controller.executeCmd(8);
}

void Main_window::on_customer_click()
{
    controller.executeCmd(6);
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
    controller.executeCmd(7);
}

void Main_window::on_servingDis_click()
{
    controller.executeCmd(9);
}

void Main_window::on_manager_click()
{
    controller.executeCmd(10);
}

void Main_window::on_orderstat_click()
{
    controller.executeCmd(11);
}

void Main_window::on_save_click()
{
    controller.executeCmd(12);
}

void Main_window::on_load_click()
{
    controller.executeCmd(13);
}