#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <iomanip>
#include <cfloat>
class ScalarConverter {
public:
    typedef enum nbr_type
    {
        INT,
        FLOAT,
        DOUBLE,
        CHAR,
        NANT,
        INF,
        NEGINF,
        UNKNOWN,
    } Type;
private:
    std::string str;
    Type type;
public:

    ScalarConverter();
    ScalarConverter(ScalarConverter &copy);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &c);
     void convert();
     void setStr(const char *argv);
     std::string getStr();
     void setType(Type t);
     int isInt();
     int isFloat();
     int isDouble();
     int isChar();
     int isNan();
     int isInf();
     Type getType();
};
void printChar(ScalarConverter *sc);
void printInt(ScalarConverter *sc);
void printFloat(ScalarConverter *sc);
void printDouble(ScalarConverter *sc);
void printNan();
void printNegInf();
void printInf();
#endif
