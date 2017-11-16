#ifndef EMPORIUM_H
#define EMPORIUM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "item.h"
#include "scoop.h"
#include "container.h"
#include "topping.h"
#include "serving.h"
#include "customer.h"
#include "server.h"
#include "order.h"
#include "cashregister.h"
#include <vector>

namespace Mice{

  class Emporium {

    public:
    //void load(istream nFile);
    //void save(ostream nFile);
    Item get_Items();
    Person get_Persons();

    private:
      CashRegister reggie;


    protected:

  };

}

#endif
