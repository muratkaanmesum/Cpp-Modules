#include <iostream>
#include <fstream>
void replace_occurrence(std::string& file_string, const std::string& s1, const std::string& s2) {
	size_t s1_len = s1.length();
	size_t s2_len = s2.length();
	size_t pos = 0;
	while (true)
	{
		pos = file_string.find(s1, pos);
		if (pos == std::string::npos)
			break;
		file_string.erase(pos, s1_len);
		file_string.insert(pos, s2);
		pos += s2_len;
	}
}
int main(int argc , char **argv)
{
 	if (argc != 4)
		return 1;
	std::ifstream readfile(argv[1]);
	std::string line;
	std::string file_string;
	if (!readfile.is_open())
	{
		std::cout << "Error!";
		return 1;
	}
	std::ofstream inputFile(std::string(argv[1] + std::string(".replace")));
	while (std::getline(readfile,line))
		file_string +=line + '\n';
	readfile.close();
	replace_occurrence(file_string,argv[2],argv[3]);
	inputFile << file_string;
}
