#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
	public:
		Item (string Name, string Description, double wholesaleCost, double retailPrice, int RemainingStock);
		void restock(int restock=25);
		void consume(int quantity=1);
		virtual string type();
		string iname();
		string description();
		double cost();
		double price();
		int remainStock();

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
