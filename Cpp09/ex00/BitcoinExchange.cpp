
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
    std::string line;
    while (std::getline(file, line))
    {
        std::cout << "line : " << line << std::endl;
        unsigned long end = line.find('|');
        if (end == std::string::npos)
            continue;

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
            this->inputFile.insert(std::make_pair("Error!", 0));
            continue;
        }
        this->inputFile.insert(std::make_pair(key, value));
        std::cout << "key : " << key << " value : " << value << std::endl;
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
        this->db.insert(std::make_pair(line.substr(start, end),
                                       std::stod(line.substr(end + 1, line.length()))));
    }
    file.close();
}
