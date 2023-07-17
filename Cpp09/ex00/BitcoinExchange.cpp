
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::cout << "Exchange created !" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
    std::cout << "Exchange destructed !" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::ifstream &file) {
    readDbFile();
    std::string line;
    while(std::getline(file,line))
    {
        unsigned long end = line.find('|');
        this->inputFile.insert(std::make_pair(line.substr(0,end) , std::stoi(line.substr(end, line.length()))));
    }
}

void BitcoinExchange::readDbFile() {
    std::ifstream file;
    std::string line;
    int start = 0;
    bool firstLine = true;
    while (std::getline(file, line)) {
        if(firstLine)
        {
            firstLine = false;
            continue;
        }
        unsigned long  end = line.find(',');
        this->db.insert(std::make_pair(line.substr(start,end),
                                       std::stof(line.substr(end + 1,line.length()))));
    }
    file.close();
    for (std::map<std::string, float>::const_iterator it = this->db.begin(); it != this->db.end(); ++it) {
        std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
    }
}

