#include "server.h"
#include <string>
#include <iostream>

using namepace std;

Server::Server( string Name, int IDcode, string phoneNum,):
Person(Name,IDcode,phoneNum), orders{0}, salary{7.25} { }

int Server::ordersFilled()
{
  return orders;
}

double Server::currentSal()
{
  return salary;
}

int fill()
{
  
}
