#include <iostream>
#include <cstring>
#include "item.h"
#include "order.h"
using namespace std;
Report::Report()
{
}
Report::Report(int preportID, string preportName)
{
	reportID = preportID;
	reportName = preportName;
}
void Report::generateReport()
{
}
Report::~Report() {
}
