#include "test_customer.h"
#include "customer.h"
#include <iostream>
//#include <sstream>

bool test_customer() {
  std::string expected = "";
  bool passed = true; // Optimist!

  //
  // Test constructor
  //

  std::string x_name = "Charlie Chaplin";
  std::string x_id = "tramp";
  std::string x_phone = "555-1212";

  Mice::Customer customer{x_name, x_id, x_phone};

  // std::ostringstream os;
  // os << customer;

  // if (os.str() != "                      Customer: Fudge Ripple $1.50") {
  //   std::cerr << "#### Customer operator<< fail" << std::endl;
  //   std::cerr << "Expected:                       Customer: Fudge Ripple $1.50" << std::endl;
  //   std::cerr << "Actual:   " << os.str() << std::endl;
  // }


  if (customer.name() != x_name ||
      customer.id() != x_id ||
      customer.phone() != x_phone ||
     !customer.is_active()) {
    std::cerr << "#### Customer constructor fail" << std::endl;
    std::cerr << "Expected: " << x_name << ',' 
                              << x_id << ','
                              << x_phone << ','
                              << "is active" << std::endl;
    std::cerr << "Actual:   " << customer.name() << ',' 
                              << customer.id() << ','
                              << customer.phone() << ','
                              << (customer.is_active() ? "is active" : "is not active") << std::endl;
    passed = false;
  }

  //
  // Test set_active and is_active
  //
  customer.set_active(false);
  if (customer.is_active()) {
    std::cerr << "#### Customer: setting inactive failed" << std::endl;
    std::cerr << "Expected: is not active  Actual: " 
              << (customer.is_active() ? "is active" : "is not active") << std::endl;
    passed = false;
  }

  customer.set_active(true);
  if (!customer.is_active()) {
    std::cerr << "#### Customer: setting active failed" << std::endl;
    std::cerr << "Expected: is active  Actual: " 
              << (customer.is_active() ? "is active" : "is not active") << std::endl;
    passed = false;
  }

  return passed;
}
