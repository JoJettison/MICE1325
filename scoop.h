#ifndef SCOOP_H
#define SCOOP_H
#include <iostream>
#include <string>
#include "item.h"
using namespace std;

class Scoop : public Item
{
	public:
		Scoop (string Name, string Description, double wholesaleCost, double retailPrice);
		string type() override;
		

};
#endif
