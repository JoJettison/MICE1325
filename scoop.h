#ifndef SCOOP_H
#define SCOOP_H
#include <iostream>
#include <string>
using namespace std;

class Scoop
{
	public:
		void to_string();
		Scoop (string Name, string Description, double wholesaleCost, double retailPrice, int remainingStock):
		name{Name}, desc{Description}, wholeCost{wholesaleCost}, retPri{retailPrice}, remStock{remainingStock} { }

	private:
		string name;
		string desc;
		double wholeCost;
		double retPri;
		int remStock;
};
#endif
