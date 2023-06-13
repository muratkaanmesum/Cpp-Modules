#include "ScalarConverter.hpp"
void printChar(ScalarConverter *sc)
{
    std::cout << "char: ";
    if(sc->getType() == ScalarConverter::CHAR)
        std::cout << sc->getStr() << std::endl;
    else
    {
        int num = std::strtol(sc->getStr().c_str(),NULL,10);
        if(num < 0 || num > 127 || std::isnan(num))
            std::cout << "impossible" << std::endl;
        else if((num > 0 && num < 32) || num == 127)
            std::cout << "non printable" << std::endl;
        else
            std::cout << static_cast<char>(num) << std::endl;
    }
}
void printInt(ScalarConverter *sc)
{
    std::cout << "Int: ";
    if(sc->getType() == ScalarConverter::CHAR)
        std::cout << sc->getStr() << std::endl;

}