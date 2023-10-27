#pragma once
#include "Date.h"
#include "Time_.h"
#include <string>

class Order
{
	Date orderDate;
	Time_ orderTime;
	int readyDuration;
	string info;
	float price;
	int orderId;
	static int counter;
public:
	Order();
	Order(Date d, Time_ t, string _info);
	
	Date getOrderDate()const;
	Time_ getOrderTime()const;
	int getReadyDur()const;
	string getOrderInfo()const;
	float getPrice()const;
	int getOrderId()const;
	static int getCounter();
	static void resetCounter();

	void showInfo()const;

};

