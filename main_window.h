#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "container.h"
#include "scoop.h"
#include "toppings.h"

class Main_window : public Gtk::Window
{
    public:
        Main_window();
        virtual ~Main_window();
    protected:
        void on_newContainer_click();
        void on_newFlavor_click();
        void on_newTopping_click();
        void on_quitClick();
    private:

};
#endif 
