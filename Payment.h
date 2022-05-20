//it21268380 jonekkuhewa r.r
#pragma once
#include "order.h"
#define SIZE 2
class Payment
{
private:

	int paymentId;
	char paymentType[20];
	double paymentAmount;
	Order* order;
public:

	Payment();
	Payment(int id, const char type[], double amount);
	void confirmDetails();
	void checkDetails();
	void displayStatus();
};


/////
