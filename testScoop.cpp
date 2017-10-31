#include "scoop.h"
#include "item.h"
#include <iostream>
using namespace std;

int  main() {
  std::string expected = "";
  bool passed = true; // Optimist!

  //
  // Test constructor
  //

  std::string x_name = "Fudge Ripple";
  std::string x_description = "Chocolatey goodness in vanilla swirl";
  double x_cost = 0.75;
  double x_price = 1.50;

  Scoop scoop{x_name, x_description, x_cost, x_price};

  if (scoop.iname() != x_name ||
      scoop.description() != x_description ||
      scoop.cost() != x_cost ||
      scoop.price() != x_price ||
      scoop.type() != "Scoop" ||
      scoop.remainStock() != 0) {
    std::cerr << "#### Scoop constructor fail" << std::endl;
    std::cerr << "Expected: " << x_name << ','
                              << x_description << ','
                              << x_cost << ','
                              << x_price << ','
                              << "Scoop" << ','
                              << '0' << std::endl;
    std::cerr << "Actual:   " << scoop.iname() << ','
                              << scoop.description() << ','
                              << scoop.cost() << ','
                              << scoop.price() << ','
                              << scoop.type() << ','
                              << scoop.remainStock() << std::endl;
    passed = false;
  }

  //
  // Report results
  //

  return 0;
}
