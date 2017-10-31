#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include "item.h"
using namespace std;

class Container : public Item
{
public:
	Container (string Name, string Description, double wholesaleCost, double retailPrice, int maximumScoops);
	string type() override;
	int maximScoops();
private:
	int maxScoops;
};
#endif
