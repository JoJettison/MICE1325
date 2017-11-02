#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <gtkmm.h>
#include <sstream>
#include "dialogs.h"
#include "item.h"
#include "scoop.h"
#include "container.h"
#include "toppings.h"
#include "manager.h"
#include <iostream>
#include <string>

class Controller {
  public:
    Controller(Manager& mana) : manager(mana) { }
    void executeCmd(int cmd);
    void help();
  private:
    Manager& manager;
};
#endif
