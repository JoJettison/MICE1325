#ifndef SCOOP_H
#define SCOOP_H
#include <iostream>
#include <string>
using namespace std;

class Scoop
{
	public:
		void to_string();
<<<<<<< HEAD
		Scoop (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }
=======
		//Scoop (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		//Item(Name,Description,wholesaleCost,retailPrice,remainingStock) { }
>>>>>>> 4186a39aa8c16af3dc3f72730b7d25b03ba46554

	private:
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
};
#endif
