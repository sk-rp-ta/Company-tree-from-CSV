#pragma once
#include "Employee.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

class FileReader
{
public:
	std::vector<Employee> read(const std::string &_path);
};
