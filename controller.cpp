#include "controller.h"
#include "item.h"
#include "scoop.h"
#include "container.h"
#include "toppings.h"
#include "manager.h"
#include <iostream>
#include <string>

void Controller::executeCmd(int cmd)
{
  string Name, Description;
  double wholesaleCost, retailPrice;
  int remainingStock, maximumScoops,style;
  if (cmd==1)
  {
  cout<<"Enter the item's Name"<<endl;
  getline(cin,Name);
  cout<<"Enter the description of the item"<<endl;
  getline(cin,Description);
  cout<<"Enter the wholesale cost of the item"<<endl;
  cin>>wholesaleCost;
  cin.ignore();
  cout<<"Enter retail price of the item"<<endl;
  cin>>retailPrice;
  cin.ignore();
  cout<<"Enter how many units of the item are available"<<endl;
  cin>>remainingStock;
  cin.ignore();

  manager.addItem(Item(Name,Description,wholesaleCost,retailPrice,remainingStock));
  }

  if (cmd==2)
  {
  cout<<"Enter the Scoop's Name"<<endl;
  getline(cin,Name);
  cout<<"Enter the description of the scoop"<<endl;
  getline(cin,Description);
  cout<<"Enter the wholesale cost of the scoop"<<endl;
  cin>>wholesaleCost;
  cin.ignore();
  cout<<"Enter retail price of the scoop"<<endl;
  cin>>retailPrice;
  cin.ignore();
  cout<<"Enter how many scoops are available"<<endl;
  cin>>remainingStock;
  cin.ignore();

  manager.addScoop(Scoop(Name,Description,wholesaleCost,retailPrice,remainingStock));
  }

  if (cmd==3)
  {
  cout<<"Enter the toppings' Name"<<endl;
  getline(cin,Name);
  cout<<"Enter the description of the toppings"<<endl;
  getline(cin,Description);
  cout<<"Enter the topping style 0= light, 1=normal, 2=extra, 3=drenched"<<endl;
  cin>>style;
  cin.ignore();
  cout<<"Enter the wholesale cost of the toppings"<<endl;
  cin>>wholesaleCost;
  cin.ignore();
  cout<<"Enter retail price of the toppings"<<endl;
  cin>>retailPrice;
  cin.ignore();
  cout<<"Enter how many toppings are available"<<endl;
  cin>>remainingStock;
  cin.ignore();

  manager.addToppings(Toppings(Name,Description,style,wholesaleCost,retailPrice,remainingStock));
  }
  if (cmd==4)
  {
  cout<<"Enter the container's Name"<<endl;
  getline(cin,Name);
  cout<<"Enter the description of the container"<<endl;
  getline(cin,Description);
  cout<<"Enter the wholesale cost of the container"<<endl;
  cin>>wholesaleCost;
  cin.ignore();
  cout<<"Enter retail price of the container"<<endl;
  cin>>retailPrice;
  cin.ignore();
  cout<<"Enter how many containers are available"<<endl;
  cin>>remainingStock;
  cin.ignore();
  cout<<"Enter how many scoops the container can hold"<<endl;
  cin>>maximumScoops;
  cin.ignore();
  manager.addContainer(Container(Name,Description,wholesaleCost,retailPrice,remainingStock,maximumScoops));
  }

}
