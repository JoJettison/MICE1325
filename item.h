#include <iostream>
using namespace std;

class Item
{
	public:
		string to_string();
		Item (string Name, string Description, double wholesaleCost, double retailCost, int remainingStock):
		name(Name), desc(Description), wholeCost(wholesaleCost), retCost(retailCost), remStock(remainingStock){}

	private:
		string name;
		string desc;
		double wholeCost;
		double retCost;
		int remStock;
}
