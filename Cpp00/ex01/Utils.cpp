#include "PhoneBook.hpp"

void print_index(int index)
{
	int i = -1;
	while (++i < 9)
		std::cout << ' ';
	std::cout << index << '|';
}
