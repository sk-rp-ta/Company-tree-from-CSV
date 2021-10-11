#include "DependencyCreator.h"

void DependencyCreator::createDependencyTree(std::vector<Employee> employees, std::string hierarchy, int spaces) {

	static std::string companyName = employees[0].company;
	bool change = true;
	for (auto it = employees.begin(); it != employees.end(); ++it) {

		if (it->dependency == hierarchy && it->company == companyName) {
			std::cout << std::setw(4 * spaces);
			if (spaces > 0) std::cout << "->";
			std::cout << it->id << " " << it->dependency << " " << it->name << " " << it->surname << " " << it->company << " " << it->job << std::endl;
			createDependencyTree(employees, it->id, spaces + 1);
		}
		else continue;
	}
}


