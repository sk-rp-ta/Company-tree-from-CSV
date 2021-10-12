#include "FileReader.h"
#include "Printer.h"
#include "UniqueCompanyNamesFinder.h"

int main(int argc, char* argv[])
{
	FileReader fileReader;
	std::vector<Employee> data = fileReader.read("companies_data.csv");

	UniqueCompanyNamesFinder finder;
	std::vector<std::string> uniqueCompanyNames = finder.getUniqueCompanyNames(data);

	Printer printer;
	printer.show(data,uniqueCompanyNames);

	return 0;
}
