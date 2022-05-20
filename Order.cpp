#include <iostream>
#include <cstring>
using namespace std;
#include "order.h"
order::order()
{
	orderID = 0;
	strcpy_s(orderDate, "");
}
order::order(int oID, const char oDate[])
{
	orderID = oID;
	strcpy_s(orderDate, oDate);
}
void order::displayorder()
{
	cout << "order ID = " << orderID << endl;
	cout << "order Date = " << orderDate << endl;
}
order :: ~order()
{
}
//