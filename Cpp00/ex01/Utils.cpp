#include "PhoneBook.hpp"

std::string  get_input(std::string message)
{
    std::string str;
    while (str.length() <= 0)
    {
        std::cout << message << ": ";
        std::getline(std::cin, str);
    }
    return str;
}
