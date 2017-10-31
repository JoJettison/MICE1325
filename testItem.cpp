#include "item.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::string expected = "";
  bool passed = true; // Optimist!

  //
  // Test constructor
  //

  std::string x_name = "Fudge Ripple";
  std::string x_description = "Chocolatey goodness in vanilla swirl";
  double x_cost = 0.75;
  double x_price = 1.50;

  Item item{x_name, x_description, x_cost, x_price};

  if (item.iname() != x_name ||
      item.description() != x_description ||
      item.cost() != x_cost ||
      item.price() != x_price ||
      item.remainStock() != 0 ||
      item.type() != "Item") {
    std::cerr << "#### Item constructor fail" << std::endl;
    std::cerr << "Expected: " << x_name << ','
                              << x_description << ','
                              << x_cost << ','
                              << x_price << ','
                              << '0' << ','
                              << "Item" << std::endl;
    std::cerr << "Actual:   " << item.iname() << ','
                              << item.description() << ','
                              << item.cost() << ','
                              << item.price() << ','
                              << item.remainStock() << ','
                              << item.type() << std::endl;
  }

  //
  // Test restock
  //
  item.restock();
  if (item.remainStock() != 25) {
    std::cerr << "#### Item: Restock failed" << std::endl;
    std::cerr << "Expected: 25  Actual: " << item.remainStock() << std::endl;
    passed = false;
  }

  item.restock(50);
  if (item.remainStock() != 50) {
    std::cerr << "#### Item: Restock failed" << std::endl;
    std::cerr << "Expected: 50  Actual: " << item.remainStock() << std::endl;
    passed = false;
  }

  //
  // Test consume
  //
  item.consume();
  if (item.remainStock() != 49) {
    std::cerr << "#### Item: Consume failed" << std::endl;
    std::cerr << "Expected: 49  Actual: " << item.remainStock() << std::endl;
    passed = false;
  }

  item.consume(3);
  if (item.remainStock() != 46) {
    std::cerr << "#### Item: Consume failed" << std::endl;
    std::cerr << "Expected: 46  Actual: " << item.remainStock() << std::endl;
    passed = false;
  }

  item.consume(46);
  if (item.iname() != x_name ||
      item.description() != x_description ||
      item.cost() != x_cost ||
      item.price() != x_price ||
      item.remainStock() != 0 ||
      item.type() != "Item") {
    std::cerr << "#### Item: restock or consume fail" << std::endl;
    std::cerr << "Expected: " << x_name << ','
                              << x_description << ','
                              << x_cost << ','
                              << x_price << ','
                              << '0' << ','
                              << "Item" << std::endl;
    std::cerr << "Actual:   " << item.iname() << ','
                              << item.description() << ','
                              << item.cost() << ','
                              << item.price() << ','
                              << item.remainStock() << ','
                              << item.type() << std::endl;
    passed = false;
  }
  //
  // Report results
  //

  return 0;
}
