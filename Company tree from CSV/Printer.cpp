#include "Printer.h"

void Printer::printSingleCompany(const std::vector<Employee> &employees, const std::string &companyName, std::string hierarchy, int spaces) {
	
	for (auto it = employees.begin(); it != employees.end(); ++it) {

		if (it->dependency == hierarchy && it->company == companyName) {

			std::cout << std::setw(4 * spaces);
			if (spaces > 0) std::cout << "->";
			std::cout << it->name << " " << it->surname << ", " << it->company << ", " << it->job << std::endl;

			printSingleCompany(employees, companyName, it->id, spaces + 1);
		}
		else continue;
	}
}
void Printer::show(const std::vector<Employee>& employees, const std::vector<std::string>& companyNames) {
	for (auto &companyName : companyNames) {
		printSingleCompany(employees,companyName);
		std::cout << std::endl << std::endl;
	}
}