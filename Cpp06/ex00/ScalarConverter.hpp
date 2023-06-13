#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
class ScalarConverter {
public:
    typedef enum nbr_type
    {
        INT,
        FLOAT,
        DOUBLE,
        CHAR,
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
     Type getType();
};
void printChar(ScalarConverter *sc);

#endif
