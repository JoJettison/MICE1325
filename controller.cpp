#include "controller.h"

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


  manager.addItem(Item(Name,Description,wholesaleCost,retailPrice));
  }

  if (cmd==2)
  {
    string name, description, a, b, c;
    double wholesaleCost, retailPrice;
    int remainingStock;

    name = Dialogs::input("Name?");
    description = Dialogs::input("Description?");
    a = Dialogs::input("Whole Sale Cost?");
    b = Dialogs::input("Retail Price?");
    c = Dialogs::input("How many scoops are available?");
    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;

    manager.addScoop(Scoop(Name,Description,wholesaleCost,retailPrice,remainingStock));

  }

  if (cmd==3)
  {
    string name, description, a, b, c;
    double wholesaleCost, retailPrice;
    int remainingStock;

    name = Dialogs::input("Name?");
    description = Dialogs::input("Description?");
    a = Dialogs::input("Whole Sale Cost?");
    b = Dialogs::input("Retail Price?");
    c = Dialogs::input("How many toppings are available?");
    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;
  
    manager.addToppings(Toppings(Name,Description,style,wholesaleCost,retailPrice,remainingStock));
  }
  if (cmd==4)
  {
    string name, description, a, b, c, d;
    double wholesaleCost, retailPrice;
    int remainingStock, maximumScoops;

    name = Dialogs::input("Name?");
    description = Dialogs::input("Description?");
    a = Dialogs::input("Whole Sale Cost?");
    b = Dialogs::input("Retail Price?");
    c = Dialogs::input("How many containers are available?");
    d = Dialogs::input("How many scoops can the container hold?");
    stringstream aa(a);
    aa >> wholesaleCost;
    stringstream bb(b);
    bb >> retailPrice;
    stringstream cc(c);
    cc >> remainingStock;
    stringstream dd(d);
    dd >> maximumScoops;

    manager.addContainer(Container(Name,Description,wholesaleCost,retailPrice,remainingStock,maximumScoops));
  }
}
