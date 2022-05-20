//it21268380 jonekkuhewa r.r
#include<iostream>
#include "Payment.h"
#include <cstring>
Payment::Payment() {
	paymentId = 0;
	strcpy_s(paymentType, "");
	paymentAmount = 0;
}
Payment::Payment(int id, const char type[], double amount) {
	paymentId = id;
	strcpy_s(paymentType, type);
	paymentAmount = amount;
}
void Payment::confirmDetails()
{
}
void Payment::checkDetails()
{
}
void Payment::displayStatus()
{
  
}
//
//
//
