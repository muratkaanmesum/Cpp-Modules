#include "PhoneBook.hpp"
#include <iostream>
PhoneBook::PhoneBook()
{
	std::cout << "Phonebook Created !" << std::endl;
	;
}
PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook Destroyed !" << std::endl;
	;
}
void PhoneBook::AddContact()
{
	std::cout << "Contact Added !" << std::endl;
	;
}
void PhoneBook::Search()
{
	std::cout << "Searched" << std::endl;
}
