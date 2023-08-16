#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstring>
#include <utility>
#include <vector>
#include <list>
class BitcoinExchange
{
private:
    std::list<std::pair<std::string, double> > db;
    std::list<std::pair<std::string, double> > inputFile;
    void readDbFile();

public:
    BitcoinExchange();
    BitcoinExchange(std::ifstream &file);
    ~BitcoinExchange();
};

#endif
