#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
	public:
		Item (string Name, string Description, double wholesaleCost, double retailPrice);
		void restock(int restock=25);
		void consume(int quantity=1);
		virtual string type();
		string iname();
		string description();
		double cost();
		double price();
		int remainStock();

		void to_string();

	private:
		vector<Item> itemList;
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
		//Gtk::Image picture
};
#endif
