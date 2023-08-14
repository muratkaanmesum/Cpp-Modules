
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstring>
class BitcoinExchange
{
private:
    std::map<std::string, double> db;
    std::map<std::string, double> inputFile;
    void readDbFile();

public:
    BitcoinExchange();
    BitcoinExchange(std::ifstream &file);
    ~BitcoinExchange();
};

#endif
