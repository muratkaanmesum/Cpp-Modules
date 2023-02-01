#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	int			exit;

	std::string str;
	exit = 0;
	while (exit == 0)
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
