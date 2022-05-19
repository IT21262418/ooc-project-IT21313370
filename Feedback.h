#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Feedback
{
private:
	int feedbackNo;
	string email;
	string feedbackdiscription;
public:
	Feedback(int fbNo, string mail, string fb);
	void displayFeedback();
	~Feedback();
};