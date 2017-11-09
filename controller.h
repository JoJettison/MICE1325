#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <gtkmm.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "dialogs.h"
#include "item.h"
#include "scoop.h"
#include "container.h"
#include "toppings.h"
#include "serving.h"
#include "manager.h"
#include "emporium.h"
#include <iostream>
#include <string>

using namespace std;

class Controller {
  public:
    Controller(Emporium& empo) : emporium(empo) { }
    void executeCmd(int cmd);
    void help();
  private:
    Emporium& emporium;
};
#endif
