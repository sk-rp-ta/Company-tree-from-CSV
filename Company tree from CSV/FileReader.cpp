#include "FileReader.h"

std::vector<Employee> FileReader::read(const std::string &_path){
	std::ifstream file;
	file.open(_path);

	if (!file.is_open()) {
		std::cout << "Unable to open file";
		exit(1);
	}
	else {
		std::vector<Employee> result;
		std::cout << "File succesfully opened" << std::endl<<std::endl;

		std::string line;

		while (getline(file, line)) {
			std::stringstream ss(line);
			std::vector<std::string> workerData;
			std::string temp;

			while (std::getline(ss, temp, ',')) {
				if (!temp.empty())
					workerData.push_back(temp);
			}
			Employee employee(workerData[0], workerData[1], workerData[2], workerData[3], workerData[4], workerData[6]);
			result.push_back(employee);

			ss.clear();
			line.clear();
			line = "";
		}

		file.close();

		return result;
	}
}