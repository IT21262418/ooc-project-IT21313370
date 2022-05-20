//IT21262418 Munasinghe A.J
#pragma once
#include <iostream>
#include <string>
#include "item.h"
#include "order.h"
using namespace std;
class Report {
private:
	int reportID;
	string reportName;
public:
	Report();
	Report(int preportID, string preportName);
	void generateReport();
	~Report();
};