#include "Order.h"
#include "System.h"

int Order::counter = 1392;
int main()
{
	Order a(Date(), Time_(), "coffee");
	Order b(Date(), Time_(), "pizza");
	Order c(Date(), Time_(), "coke");
	/*a.showInfo();
	b.showInfo();
	c.showInfo();
	cout << "counter: " << Order::getCounter() << endl;
	cout << "counter: " << a.getCounter() << endl;
	cout << "counter: " << b.getCounter() << endl;
	cout << "counter: " << c.getCounter() << endl;*/

	System MCDonalds;
	MCDonalds.showTable();
	short menu = 0;
	string str = "";
	do
	{
		cout << "1 - Show order table" << endl;
		cout << "2 - Create new order" << endl;
		cout << "3 - Take a ready order" << endl;
		cin >> menu;
		if (cin.fail())
		{
			cout << "Invalid input. Please enter a valid number." << endl << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		switch (menu)
		{
		case 1:
			MCDonalds.showTable();
			break;
		case 2:
			cout << "What you want to order?\n";
			cin.ignore();
			getline(cin, str);
			MCDonalds.addOrder(Order(Date(), Time_(), str));
			break;
		case 3:
			MCDonalds.takeOrder();
			break;
		default:
			break;
		}
	} while (menu!=0);
}