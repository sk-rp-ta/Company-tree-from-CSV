#include "UniqueCompanyNamesFinder.h"

std::vector<std::string> UniqueCompanyNamesFinder::getUniqueCompanyNames(const std::vector<Employee>& employees) {
	std::vector<std::string> result;
	for (auto& employee : employees) {
		if (std::find(result.begin(), result.end(), employee.company) == result.end())
			result.push_back(employee.company);
	}
	return result;
}