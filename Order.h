#pragma once
#include "item.h"
using namespace std;
class order
{
private:
	int orderID;
	char orderDate[20];
	Item* item;
public:
	order();
	order(int oID, const char oDate[]);
	void displayorder();
	~order();
};
