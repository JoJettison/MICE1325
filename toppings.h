#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
#include "item.h"
using namespace std;

class Toppings: public Item
{
	public:
		Toppings (string Name, string Description,int topStyle, double wholesaleCost, double retailPrice, int remainingStock);
		int style();
		const static int LIGHT =0;
		const static int NORMAL =1;
		const static int EXTRA =2;
		const static int DRENCHED=3;
		string type() override;
	private:

		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
		int tStyle;

};
#endif
