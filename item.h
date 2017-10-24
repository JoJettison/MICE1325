#include <iostream>
#include <string>
using namespace std;

class Item
{
	public:
		string to_string();
		Item (string Name, string Description, double wholesaleCost, double retailCost, int remainingStock):
		name(Name), desc(Description), wholeCost(wholesaleCost), retPri(retailCost), remStock(remainingStock){}

	private:
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
}
