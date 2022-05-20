//IT21262418 Munasinghe A.J
#include "feedback.h"
#include <iostream>
#include <cstring>
using namespace std;

Feedback::Feedback(int fbNo, string mail, string fb)
{
	feedbackNo = fbNo;
	email = mail;
	feedbackdiscription = fb;
}
void Feedback::displayFeedback()
{
	cout << "Feedback  No :" << feedbackNo << endl;
	cout << "Email :" << email << endl;
	cout << "Feedback Discription :" << endl;
}
Feedback::~Feedback()
{

}