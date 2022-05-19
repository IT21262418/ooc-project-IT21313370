#include "MusicTeacher.h"
#include "GuestUser.h"
#include <iostream>
#include <cstring>

using namespace std;

//class implementation
MusicTeacher::MusicTeacher()
{
	empID = 0;
	strcpy(userName, "");
	strcpy(userAddress, "");
	strcpy(userEmail, "");
	userContactNo = 0;
	userID = 0;
	strcpy(country, "");

}

MusicTeacher::MusicTeacher(const char pName[50], const char pAddress[50], const char pEmail[30], int pContactNo, int pUserID, const char pCountry[20], int pEmpID) : GuestUser(pName, pAddress, pEmail, pContactNo, pUserID, pCountry)
{
	empID = pEmpID;
	strcpy(userName, pName);
	strcpy(userAddress, pAddress);
	strcpy(userEmail, pEmail);
	userContactNo = pContactNo;
	userID = pUserID;
	strcpy(country, pCountry);
}

//overiding function
void MusicTeacher::displayUserDetails()
{
	cout << "Emp ID: " << empID << endl;
	cout << "Name: " << userName << endl;
	cout << "Address: " << userAddress << endl;
	cout << "Email: " << userEmail << endl;
	cout << "Contact No: " << userContactNo << endl;
	cout << "User ID: " << userID << endl;
	cout << "Country name : " << country << endl;

}
void MusicTeacher::displayOrderDetails()
{

}
void MusicTeacher::updateTimeSlots()
{

}
MusicTeacher::~MusicTeacher()
{
	cout << "MusicTeacher deleted" << endl;
}



