#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "container.h"
#include "scoop.h"
#include "toppings.h"
#include "controller.h"
#include "manager.h"

class Main_window : public Gtk::Window
{
    public:
        Main_window(Controller controller);
        virtual ~Main_window();
    protected:
        void on_order_click();
        void on_customer_click();
        void on_item_click();
        void on_server_click();
        void on_servingDis_click();
        //void on_newContainer_click();
        //void on_newFlavor_click();
        //void on_newTopping_click();
        void on_quit_click();
    private:
      Controller controller;
};
#endif
