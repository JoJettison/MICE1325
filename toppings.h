#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
#include "item.h"
using namespace std;

class Toppings : public Item
{
	public:
		Toppings (string Name, string Description, double wholesaleCost, double retailPrice, int topStyle);
		int style();
		const static int LIGHT =0;
		const static int NORMAL =1;
		const static int EXTRA =2;
		const static int DRENCHED=3;
		string type() override;
	private:
		void  setStyle(int topStyle);
		int tStyle;

};
#endif
