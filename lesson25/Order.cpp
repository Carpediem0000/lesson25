#include "Order.h"

Order::Order()
{
	info = "Empty";
	price = 0;
	readyDuration = 0;
	orderId = 0;
}

Order::Order(Date d, Time_ t, string _info)
{
	this->orderDate = d;
	this->orderTime = t;
	this->info = _info;
	this->readyDuration = rand() % 50 + 5;
	this->price = rand() % 200 + 50;
	this->orderId = counter++;
}

Date Order::getOrderDate() const
{
	return orderDate;
}

Time_ Order::getOrderTime() const
{
	return orderTime;
}

int Order::getReadyDur() const
{
	return readyDuration;
}

string Order::getOrderInfo() const
{
	return info;
}

float Order::getPrice() const
{
	return price;
}

int Order::getOrderId() const
{
	return orderId;
}

int Order::getCounter()
{
	return counter;
}

void Order::resetCounter()
{
	counter = 0;
}

void Order::showInfo() const
{
	cout << "============================================\n";
	cout << "\tOrder: " << orderId << endl;
	cout << "============================================\n";
	cout << orderDate << " " << orderTime << endl;
	cout << "Info: " << info << endl;
	cout << "Ready time: " << (float)readyDuration + orderTime << endl;
	cout << "Price: " << price << "uah" << endl;
	cout << "============================================\n\n";
}
