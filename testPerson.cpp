#include<iostream>
#include<string>
#include "person.h"
using namespace std;

int main(){
  Person steve("Steven Smith", 124568, "817-444-5281");

  string n = steve.pname();
  int i= steve.idcode();
  string p = steve.phone();
  bool st=steve.status();
  cout<<n<<" "<<i<<" "<<p<<" " <<steve.status()<< endl;
  steve.switcher();
  cout<<n<<" "<<i<<" "<<p<<" " <<steve.status()<< endl;
}
