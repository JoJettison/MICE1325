#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
using namespace std;

class Toppings
{
	public:
		Toppings (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
		void to_string();
	private:

		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;

};
#endif
