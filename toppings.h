#include <iostream>
using namespace std;

class Toppings
{
	public:
		Toppings (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
		void to_string();
	private:
<<<<<<< HEAD
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
=======
>>>>>>> 4186a39aa8c16af3dc3f72730b7d25b03ba46554
};
