#include "CSVFile.h"

void CSVFile::read(std::string path) {
	std::ifstream file;
	file.open(path);
	if (!file.is_open()) {
		std::cout << "Unable to open file";
		exit(1);
	}
	else {
		std::cout << "File succesfully opened" << std::endl;

		std::string line;
		while (getline(file, line)) {

			std::stringstream ss(line);
			std::vector<std::string> workerData;
			std::string temp;

			std::vector<bool> columnsForSave = {false, true, true, true, true, false, true, false, false, false};
			auto it = columnsForSave.begin();

			while (std::getline(ss, temp, ',')) {
				if (!temp.empty() && (*it))
					workerData.push_back(temp);
				++it;
			}
			workersList.push_back(workerData);
			
ss.clear();
			line.clear();
			line = "";
		}
		std::sort(workersList.begin(), workersList.end(), 
			[](const std::vector<std::string>& a, const std::vector<std::string>& b) 
			{
				if (a[3] < b[3]) return true;
				if (b[3] < a[3]) return false;

				if (stoi(a[0]) < stoi(b[0])) return true;
				
				return false;
			});

		file.close();
	}
}
void CSVFile::show() {

	std::string lastHierarchy = workersList[0][0];

	for (auto &worker : workersList) {
		static std::string company="";
		static int position = 0;
		
		if (company != worker[3]) {
			std::cout<<std::endl;
			std::cout << worker[3] << ":" << std::endl << std::endl;
			company = worker[3];
			position = 0;
			lastHierarchy = worker[0];
		}

		if (lastHierarchy != worker[0]) {
			++position;
			lastHierarchy = worker[0];
		}
		std::cout << std::setw(4 * position);
		if (position) std::cout << "->";
		std::cout<< worker[1] << " " << worker[2] << ", " << worker[3] << ", " << worker[4] << std::endl;
	}
}
