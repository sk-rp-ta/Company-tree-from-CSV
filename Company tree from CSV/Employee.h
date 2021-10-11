#pragma once
#include <vector>
#include <iostream>

class Employee
{
public:
	Employee(std::string _id, std::string _dependency, std::string _name, std::string _surname, std::string _company, std::string _job);
	std::string id;
	std::string dependency;
	std::string name;
	std::string surname;
	std::string company;
	std::string job;
};

