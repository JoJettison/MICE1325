#include "server.h"
#include <string>
#include <iostream>

using namespace std;

Server::Server( string Name, int IDcode, string phoneNum):
Person(Name,IDcode,phoneNum), orders{0}, salary{7.25} { }

int Server::ordersFilled()
{
  return orders;
}

double Server::currentSal()
{
  return salary;
}

void Server::fill()
{
  orders+=1;

}
