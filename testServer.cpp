#include "server.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  Server steven("Steven Smith", 124568, "817-444-5281");
  Person bob("Bobert", 148486, "215-987-3545");

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

  cout<<bob.pType()<<endl;
  cout<<steven.pType()<<endl;
}
