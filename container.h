#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include <string>
using namespace std;

class Container
{
public:
	void to_string();
	//Container (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
	//Item(Name,Description,wholesaleCost,retailPrice,remainingStock) { }
private:
	int maxScoops;
};
#endif