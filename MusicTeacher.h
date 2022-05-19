#pragma once
#include "GuestUser.h"
#include <iostream>
#include <string>

using namespace std;


class MusicTeacher : public GuestUser {
private:
	int empID;


public:
	MusicTeacher();
	MusicTeacher(const char pName[50], const char pAddress[50], const char pEmail[30], int pContactNo, int pUserID, const char pCountry[20], int empID);
	void displayUserDetails();
	void displayOrderDetails();
	void updateTimeSlots();
	~MusicTeacher();
};

