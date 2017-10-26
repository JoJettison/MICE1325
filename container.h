#include <iostream>
using namespace std;

class Container
{
	public:
		Container (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
		void to_string();
	private:
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
};
