//IT21266546
#pragma once
#include"GuestUser.h"
#include<iostream>
#include<cstring>

class Student : public GuestUser {
private:
	int studentID, studentAge;


public:
	//Default constructor
	Student();

	//Overloading constructor
	Student(const char pName[50], const char pAddress[50], const char pEmail[30], int pContactNo, int pUserID, const char pCountry[20], int pStudnetID, int pStudentAge);

	void displayUserDetails();

	void displayOrderDetails();


	// Destructor
	~Student();
};

