#include "Student.h"
#include "GuestUser.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student()
{
	studentID = 0;
	studentAge = 0;
	strcpy(userName, "");
	strcpy(userAddress, "");
	strcpy(userEmail, "");
	userContactNo = 0;
	userID = 0;
	strcpy(country, "");
}

//Student is a Guest User
//Inheritance

Student::Student(const char pName[50], const char pAddress[50], const char pEmail[30], int pContactNo, int pUserID, const char pCountry[20], int pStudentID, int pStudentAge) : GuestUser(pName, pAddress, pEmail, pContactNo, pUserID, pCountry)
{
	studentID = pStudentID;
	studentAge = pStudentAge;
	strcpy(userName, pName);
	strcpy(userAddress, pAddress);
	strcpy(userEmail, pEmail);
	userContactNo = pContactNo;
	userID = pUserID;
	strcpy(country, pCountry);
}
//Function Overriding
void Student::displayUserDetails()
{
	cout << "Student ID: " << studentID << endl;
	cout << "Student Age: " << studentAge << endl;
	cout << "Name : " << userName << endl;
	cout << "Address : " << userAddress << endl;
	cout << "Email : " << userEmail << endl;
	cout << "ContactNo : " << userContactNo << endl;
	cout << "User ID: " << userID << endl;
	cout << "Country name : " << country << endl;

}
void displayOrderDetails()
{

}
Student::~Student()
{
	cout << "Student deleted" << endl;
}
