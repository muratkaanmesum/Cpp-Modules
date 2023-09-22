
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
    readInputFile(file);
    checkInputFile();
    for(std::list<std::pair<std::string, double> >::iterator it = this->inputFile.begin(); it != this->inputFile.end(); it++)
    {
        std::string date = it->first;
        if(date.find(BAD_INPUT) != std::string::npos)
        {
            std::cout << date << std::endl;
            continue;
        }
        double value = it->second;
        std::list<std::pair<std::string, double> >::iterator resIt = std::lower_bound(this->db.begin(), this->db.end(), std::make_pair(date, value));
        if(resIt == this->db.end())
        {
            std::cout << "No data" << std::endl;
            continue;
        }
        std::cout << resIt->first << "," << resIt->second << std::endl;
    }
}
void BitcoinExchange::checkInputFile()
{
    checkDates();
    checkValues();
}
void BitcoinExchange::checkDates()
{
    for(std::list<std::pair<std::string, double> >::iterator it = this->inputFile.begin(); it != this->inputFile.end(); it++)
    {
        std::string date = it->first;
        if(date.length() != 10)
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        if(date[4] != '-' || date[7] != '-')
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        std::string year = date.substr(0, 4);
        std::string month = date.substr(5, 2);
        std::string day = date.substr(8, 2);
        char *endPtr;
        int yearInt = strtol(year.c_str(), &endPtr, 10);
        (void)yearInt;
        if(*endPtr != '\0')
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        int monthInt = strtol(month.c_str(), &endPtr, 10);
        if(*endPtr != '\0')
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        int dayInt = strtol(day.c_str(), &endPtr, 10);
        if(*endPtr != '\0')
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        if(monthInt < 1 || monthInt > 12)
        {
            it->first = BAD_INPUT + date;
            continue;
        }
        if(dayInt < 1 || dayInt > 31)
        {
            it->first = BAD_INPUT + date;
            continue;
        }
    }
}
void BitcoinExchange::readInputFile(std::ifstream &file)
{
    std::string line;
    bool firstLine = true;
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
            this->inputFile.push_back(std::make_pair(BAD_INPUT + line, 0));
            continue;
        }
        std::string key = line.substr(0, end - 1);
        std::string valStr = line.substr(end + 1, line.length());
        char *endPtr;
        double value = strtod(valStr.c_str(), &endPtr);
        if(*endPtr != '\0')
        {
            this->inputFile.push_back(std::make_pair(BAD_INPUT + line, 0));
            continue;
        }
        this->inputFile.push_back(std::make_pair(key, value));
        
    }

    file.close();
}
void BitcoinExchange::checkValues()
{
    for(std::list<std::pair<std::string, double> >::iterator it = this->inputFile.begin(); it != this->inputFile.end(); it++)
    {
        std::string date = it->first;
        if(date.find(BAD_INPUT) != std::string::npos)
            continue;
        double value = it->second;
        if (value <= 0)
        {
            it->first = NOT_POSITIVE;
            continue;
        }
        if(value > 1000)
        {
            it->first = TOO_LARGE;
            continue;
        }

    }
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
        std::string valStr = line.substr(end + 1, line.length());
        char *endPtr;
        double value = strtod(valStr.c_str(), &endPtr);
        if(*endPtr != '\0')
        {
            std::cout << "Bad input => " << line << std::endl;
            continue;
        }
        this->db.push_back(std::make_pair(key, value));
    }
    file.close();
}
