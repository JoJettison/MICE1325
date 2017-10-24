#include <stdio.h>
using namespace std;

class Item
{
	public:
		string to_string();
		Item (string name, string description, double wholesaleCost, double retailCost, int remainingStock)

	private:
		string name;
		string description;
		double wholesaleCost;
		double retailCost;
		int remainingStock;
}