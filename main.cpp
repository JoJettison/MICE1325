#include "main_window.h"
#include "controller.h"
#include <gtkmm.h>

int main (int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app =
    Gtk::Application::create(argc, argv, "edu.uta.cse1325.mice");
Manager manager;
Controller controller(manager);
  // Instance a Window
  Main_window win(controller);

  // Set the window title
  win.set_title("Maverick Ice Cream Emporium");

  //Show the window and returns when it is closed or hidden
  return app->run(win);
}
