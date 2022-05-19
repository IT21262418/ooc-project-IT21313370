#pragma once
#include"Item.h"
#include "Feedback.h"
#include <iostream> //Header file
#include <string>  // Header file

#define SIZE 2
using namespace std;

class GuestUser {
protected:

	char userName[50];
	char userAddress[50];
	char userEmail[30];
	int userContactNo;
	int userID;
	char country[20];

	Feedback* feedbk[SIZE];

public:
	GuestUser();
	GuestUser(const char pName[], const char pAddress[], const char pEmail[], int pContactNo, int pUserID, const char pCountry[]);
	void displayUserDetails();
	void addFeedback(Feedback* feedbk1, Feedback* feedbk2)
	{
		feedbk[0] = feedbk1;
		feedbk[0] = feedbk2;
	};
	void displayGuestUser()
	{
		for (int i = 0; i < SIZE; i++)
			feedbk[i]->displayFeedback();
	};
	void searchItem(Item* pItem);
	void displayOrderDetails();
	~GuestUser()
	{
		cout << "Deleting Guest User" << endl;
	};

};

