#include "ScalarConverter.hpp"
void convertToChar(ScalarConverter *sc)
{
    std::cout << "char: ";
    int num = std::strtol(sc->getStr().c_str(), NULL, 10);
    if (num < 0 || num > 127 || std::isnan(num))
        std::cout << "impossible" << std::endl;
    else if ((num > 0 && num < 32) || num == 127)
        std::cout << "non printable" << std::endl;
    else
        std::cout << static_cast<char>(num) << std::endl;
}
void printChar(ScalarConverter *sc)
{
    std::cout << "char: " << sc->getStr() << std::endl;
    int num = static_cast<int>(sc->getStr()[0]);
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}
void printInt(ScalarConverter *sc)
{
    convertToChar(sc);
    std::cout << "int: " << sc->getStr() << std::endl;
    int num = std::strtol(sc->getStr().c_str(), NULL, 10);
    std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}
void printFloat(ScalarConverter *sc)
{
    size_t decimalPlaces = sc->getStr().size() - sc->getStr().find('.') - 2;
    float num = std::strtof(sc->getStr().c_str(), NULL);
    convertToChar(sc);
    std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << std::fixed << std::setprecision((int)decimalPlaces) << "float: " << num << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl;
}
void printDouble(ScalarConverter *sc)
{
    size_t decimalPlaces = sc->getStr().size() - sc->getStr().find('.') - 1;
    double num = std::strtod(sc->getStr().c_str(), NULL);
    convertToChar(sc);
    std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << std::fixed << std::setprecision((int)decimalPlaces) << "float: " << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double: " << num << std::endl;
}
void printNan()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
void printInf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
}
void printNegInf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}
