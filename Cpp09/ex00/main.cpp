#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
        return 0;
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "File cannot be opened !" << std::endl;
        return 0;
    }
    BitcoinExchange b(file);
}
