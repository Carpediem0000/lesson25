#include "System.h"
#include <algorithm>

System::System()
{
	orderZize = 0;
	arr = nullptr;
}

System::~System()
{
	if(orderZize>0) delete[] arr;
}

void System::addOrder(Order obj)
{
	Order* tmp;
	tmp = new Order[++orderZize];
	for (int i = 0; i < orderZize-1; i++)
		tmp[i] = arr[i];
	tmp[orderZize - 1] = obj;
	if (arr != nullptr) delete[] arr;
	arr = tmp;
}

void System::byReadyTime()
{
	sort(arr, arr + orderZize, [](Order left, Order right) {
		return left.getOrderTime() + (float)left.getReadyDur() < right.getOrderTime() + (float)right.getReadyDur();
		});
}

void System::takeOrder()
{
	if (orderZize == 0)
	{
		cout << "No one order(\n";
	}
	else
	{
		byReadyTime();
		cout << "Take #" << arr[0].getOrderId() << " " << arr[0].getOrderInfo() << endl;
		orderZize--;
		for (int i = 0; i < orderZize; i++)
		{
			arr[i] = arr[i + 1];
		}
	}
}

void System::showTable()
{
	if (orderZize == 0) cout << "No one order(\n";
	else
	{
		byReadyTime();
		for (int i = 0; i < orderZize; i++)
		{
			cout << "#" << arr[i].getOrderId() << " " <<
				arr[i].getOrderTime() + (float)arr[i].getReadyDur() << " " <<
				arr[i].getOrderInfo() << endl;
		}
	}

}
