#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "container.h"
#include "scoop.h"
#include "toppings.h"
#include "controller.h"
#include "manager.h"
#include "emporium.h"

class Main_window : public Gtk::Window
{
    public:
        Main_window(Controller controller);
        virtual ~Main_window();
    protected:
        void on_order_click();
        void on_serving_click();
        void on_customer_click();
        void on_server_click();
        void on_servingDis_click();
        void on_container_click();
        void on_flavor_click();
        void on_topping_click();
        void on_quit_click();
    private:
      Controller controller;
};
#endif
