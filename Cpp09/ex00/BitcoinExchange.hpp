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
#include <cstdlib>
#define BAD_INPUT "Error: Bad input => "
#define TOO_LARGE "Error: Too large of a number"
#define NOT_POSITIVE "Error: Not a positive number"
class BitcoinExchange
{
private:
    std::list<std::pair<std::string, double> > db;
    std::list<std::pair<std::string, double> > inputFile;
    void readDbFile();
    void readInputFile(std::ifstream &file);
    void checkInputFile();
    void checkDates();
    void checkValues();
public:
    BitcoinExchange();
    BitcoinExchange(std::ifstream &file);
    ~BitcoinExchange();
};

#endif
