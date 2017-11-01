#ifndef ORDER_H
#define ORDER_H
#include "serving.h"
#include "customer.h"
#include <string>
#include <vector>
using namespace std;

class Order
{
	public:
		Order(int ordernumber, vector<Serving> Servings, Server server, Customer customer);
		const static int UNFILLED=0;
		const static int FILLED =1;
		const static int PAID =2;
		int getStatus();
		string getStatusStr();
		Customer getCustomer();
		Server getServer();
		int orderNum();
		double orderPrice();
		void fillOrder(Server sever);
		void payOrder();
		void cancelOrder();

	private:
		int orderID;
		vector <Serving> servingList;
		int status
		Customer custom;
		Server serve;



};
#endif
