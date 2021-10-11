#pragma once
#include "Employee.h"
#include <iomanip>
class DependencyCreator
{
public:
	void createDependencyTree(std::vector<Employee> employees, std::string hierarchy, int spaces);
};

