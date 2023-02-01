#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
Contact::Contact()
{
	std::cout << "contact Created" << std::endl;
}
Contact::~Contact()
{
	std::cout << "contact Destroyed" << std::endl;
}
