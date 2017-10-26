#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
using namespace std;

class Container
{
public:
	void to_string();
	Container (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock, int maximumScoops):
	name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock}, maxScoops{maximumScoops} { }
private:
	string name;
	string desc;
	double wholeCost;
	double retPri;
	int remStock;
	int maxScoops;
};
#endif
