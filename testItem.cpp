#include "item.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){

Item item1("Apple", "Keeps the doctor away", 2.50, 3.00);

item1.restock(10);
item1.to_string();
item1.consume(5);
item1.to_string();
return 0;
}
