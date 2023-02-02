#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;

	std::string str;
	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, str);
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
			phonebook.add_to_phonebook();
		else if (str == "SEARCH")
			phonebook.Search();
	}
}
