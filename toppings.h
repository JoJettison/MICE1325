#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
#include "style.h"
using namespace std;

class Toppings
{
	public:
		Toppings (string Name, string Description, Style a_style, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, style{a_style}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
		void to_string();
	private:

		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
		Style style;

};
#endif
