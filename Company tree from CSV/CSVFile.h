#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

class CSVFile
{
public:
	void read(std::string path);
	void show();
private:
	std::vector<std::vector<std::string>> workersList;
};
