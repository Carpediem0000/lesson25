#pragma once
#include "Order.h"

class System
{
	int orderZize;
	Order* arr;
public:
	System();
	~System();

	void addOrder(Order obj);
	void byReadyTime();
	void takeOrder();
	void showTable();

};

