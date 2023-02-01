#include <iostream>
#include "PhoneBook.hpp"
int main()
{
	PhoneBook phonebook;
	std::string str;
	int exit = 0;
	while (exit == 0)
	{
		std::getline(std::cin, str);
		if (str == "EXIT")
			return 0;
		else if (str == "ADD")
			phonebook.AddContact();

		else if (str == "Search")
			phonebook.Search();
	}
}
