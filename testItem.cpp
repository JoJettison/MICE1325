#include "item.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){

Item item1("Apple", "Keeps the doctor away", 2.50, 3.00, 20);

  cout<<item1.iname()<<endl;
return 0;
}
