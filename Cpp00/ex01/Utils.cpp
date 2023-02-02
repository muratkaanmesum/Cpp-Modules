#include "PhoneBook.hpp"

void print_index(int index)
{
	int i = -1;
	while (++i < 9)
		std::cout << ' ';
	std::cout << index << '|';
}
void print_string(std::string str)
{
	size_t i = 0;
	int j = 0;
	size_t len = str.length();
	size_t spaces = 10 - len > 10 ? 0 : 10 - len;
	while (i < spaces)
	{
		std::cout << ' ';
		i++;
	}

	while (i + j < (len >= 10 ? 9 : 10))
		std::cout << str[j++];
	if(len > 10){
		std::cout << '.';

	}

	std::cout << '|';

}