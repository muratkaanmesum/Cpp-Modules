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
    if(sc->isNan())
        return;
    if(sc->isInf())
        return;
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
    switch (this->type){
        case CHAR:
            printChar(this);
            break;
        case INT:
            printInt(this);
            break;
        case FLOAT:
            printFloat(this);
            break;
        case DOUBLE:
            printDouble(this);
            break;
        case NANT:
            printNan();
            break;
        case INF:
            printInf();
            break;
        case NEGINF:
            printNegInf();
            break;
        case UNKNOWN:
            std::cout << "Input is not convertible to anything" << std::endl;
        break;
    }


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
int ScalarConverter::isNan()
{
    float num = std::strtof(&this->str[0],NULL);
    if(!std::isnan(num))
        return 0;
    this->type = NANT;
        return 1;
}
int ScalarConverter::isInf()
{
    float num = std::strtof(&this->str[0],NULL);
    if(!std::isinf(num))
        return 0;
    if(this->str.find('-') != std::string::npos)
        this->type = NEGINF;
    else
        this->type = INF;
    return 1;
}