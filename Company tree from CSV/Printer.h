#pragma once
#include "Employee.h"

#include <iomanip>
class Printer
{
public:
	void show(const std::vector<Employee>& employees, const std::vector<std::string>& companyNames);
private:
	void printSingleCompany(const std::vector<Employee> &employees, const std::string &companyName, std::string hierarchy = "0", int spaces = 0);
};

