
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstring>
class BitcoinExchange {
private:
    std::map<std::string,float> db;
    static std::string readFile(std::ifstream &file);
public:
    BitcoinExchange();
    BitcoinExchange(std::ifstream &file);
    ~BitcoinExchange();
};


#endif
