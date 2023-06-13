#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {
    std::cout << "Converted is destroyed!"  << std::endl;
}

ScalarConverter::ScalarConverter():type(UNKNOWN) {
    std::cout << "Converter is created!" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &copy) {
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &c) {
    if(this == &c)
        return *this;
    *this = c;
    return *this;
}
static void checkType(ScalarConverter *sc)
{
    if(sc->isChar())
        return;
    if(sc->isInt())
        return;
    if(sc->isFloat())
        return;
    if(sc->isDouble())
        return;

}
void ScalarConverter::convert() {
    checkType(this);
    if(this->type == UNKNOWN)
        std::cout << "Input is not convertible to anything" << std::endl;
    printChar(this);
}
void ScalarConverter::setStr(const char *argv) {
    this->str = argv;
}

std::string ScalarConverter::getStr() {
    return this->str;
}

void ScalarConverter::setType(ScalarConverter::Type t) {
    this->type = t;
}

int ScalarConverter::isInt() {
    char *ptr;
    strtol(&this->str[0],&ptr,10);

    if(ptr[0] != '\0')
        return 0;
    setType(INT);
    return 1;
}

int ScalarConverter::isDouble() {
    char *ptr;
    std::strtod(&this->str[0],&ptr);
    if(ptr[0] != '\0')
        return 0;
    setType(DOUBLE);
    return 1;
}
int ScalarConverter::isFloat() {
    char *ptr;
    std::strtof(&this->str[0],&ptr);
    if (ptr[0] != 'f' || ptr[1] != '\0')
        return 0;
    setType(FLOAT);
    return 1;
}

int ScalarConverter::isChar() {
    if(this->str.length() !=1)
            return 0;
    setType(CHAR);
    return 1;
}

ScalarConverter::Type ScalarConverter::getType() {
    return this->type;
}
