#include "toppings.h"
#include <iostream>
using namespace std;

int  main() {
  std::string expected = "";
  bool passed = true; // Optimist!

  //
  // Test constructor
  //

  std::string x_name = "Maraschino Cherry";
  std::string x_description = "A sweet, plump cherry preserved in maraschino syrup";
  double x_cost = 0.10;
  double x_price = 0.50;
  int x_amount = Toppings::EXTRA;

  Toppings topping{x_name, x_description, x_cost, x_price, x_amount};

  if (topping.iname() != x_name ||
      topping.description() != x_description ||
      topping.cost() != x_cost ||
      topping.price() != x_price ||
      topping.type() != "Toppings" ||
      topping.style() != Toppings::EXTRA) {
    std::cerr << "#### Toppings constructor fail" << std::endl;
    std::cerr << "Expected: " << x_name << ','
                              << x_description << ','
                              << x_cost << ','
                              << x_price << ','
                              << "Toppings" << ','
                              << x_amount << std::endl;
    std::cerr << "Actual:   " << topping.iname() << ','
                              << topping.description() << ','
                              << topping.cost() << ','
                              << topping.price() << ','
                              << topping.type() << ','
                              << topping.style() << std::endl;
    passed = false;
  }

  //
  // Report results
  //

  return passed;
}
