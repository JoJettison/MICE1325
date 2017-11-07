#include "scoop.h"
#include <iostream>
using namespace std;

int main(){

Scoop straw("Strawberry","delicious pink creamy goodness", 5.2, 3.1, 30);

straw.to_string();
cout<<straw.iname()<<endl;

return 0;
}
