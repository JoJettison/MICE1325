#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "item.h"
#include "scoop.h"
#include "container.h"
#include "toppings.h"
#include "manager.h"

class Controller {
  public:
    Controller(Manager& mana) : manager(mana) { }
    void executeCmd(int cmd);
    void help();
  private:
    Manager& manager;
};
#endif
