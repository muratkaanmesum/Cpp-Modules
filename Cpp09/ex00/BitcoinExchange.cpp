
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "Exchange created !" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "Exchange destructed !" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::ifstream &file)
{
    readDbFile();
    bool firstLine = true;
    std::string line;
    while (std::getline(file, line))
    {
        if (firstLine)
        {
            firstLine = false;
            continue;
        }
        unsigned long end = line.find('|');
        if (end == std::string::npos)
        {
            this->inputFile.push_back(std::make_pair("Bad input => " + , 0));
            continue;
        }

        std::string key = line.substr(0, end);
        double value;
        try
        {
            value = std::stod(line.substr(end + 1, line.length()));
        }
        catch (std::exception &e)
        {
            if (typeid(e) == typeid(std::invalid_argument))
                std::cout << "Invalid argument !" << std::endl;
            else if (typeid(e) == typeid(std::out_of_range))
                std::cout << "Out of range !" << std::endl;
            else
                std::cout << "Unknown exception !" << std::endl;
            this->inputFile.push_back(std::make_pair("Error!", 0));
            continue;
        }
        this->inputFile.push_back(std::make_pair(key, value));
    }
    for (std::list<std::pair<std::string, double> >::iterator it = this->inputFile.begin(); it != this->inputFile.end(); ++it)
    {
        std::cout << "key : " << it->first << " value : " << it->second << std::endl;
    }
    file.close();
}

void BitcoinExchange::readDbFile()
{
    std::ifstream file;
    std::string line;
    int start = 0;
    bool firstLine = true;
    while (std::getline(file, line))
    {
        if (firstLine)
        {
            firstLine = false;
            continue;
        }
        unsigned long end = line.find(',');
        std::string key = line.substr(start, end);
        double value = std::stod(line.substr(end + 1, line.length()));
        this->db.push_back(std::make_pair(key, value));
    }
    file.close();
}
