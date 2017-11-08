#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"
#include <string>
#include <iostream>
using namespace std;

class Customer: public Person
{
	public:
		Customer(string Name, int IDcode, string phoneNum);

	private:
		string name;
		int id;
		string pnum;
};
#endif
