#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
	public:
		Item (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
		void to_string();

		void to_string();
		

	protected:
		vector<Item> itemList;
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
};
#endif
