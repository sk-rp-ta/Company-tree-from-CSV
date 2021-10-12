#pragma once
#include "Employee.h"

#include <fstream>
#include <string>
#include <sstream>

class FileReader
{
public:
	std::vector<Employee> read(const std::string &_path);
};
