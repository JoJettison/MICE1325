#include "server.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  Server steven("Steven Smith", 124568, "817-444-5281");

  string n = steven.pname();
  int i= steven.idcode();
  string p = steven.phone();
  bool st=steven.status();
  cout<<n<<" "<<i<<" "<<p<<" " <<steven.status()<<" "<<steven.currentSal()<<" "<<steven.ordersFilled()<< endl;
  steven.switcher();
  steven.fill();
  cout<<n<<" "<<i<<" "<<p<<" " <<steven.status()<<" "<<steven.currentSal()<<" "<<steven.ordersFilled()<< endl;
  steven.fill();
  cout<<n<<" "<<i<<" "<<p<<" " <<steven.status()<<" "<<steven.currentSal()<<" "<<steven.ordersFilled()<< endl;

}
