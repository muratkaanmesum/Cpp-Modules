#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "Phonebook Created !" << std::endl;
	this->empty_index = 0;
}
PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook Destroyed !" << std::endl;
}
void PhoneBook::add_to_phonebook()
{
	this->add_data();
	this->empty_index++;
}
void PhoneBook::get_data(Contact contact)
{
	std::cout << "Name: " << contact.get_name() << std::endl;
	std::cout << "Surname: " << contact.get_surname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
}
void PhoneBook::add_data()
{
	std::string name;
	std::string surname;
	std::string phone_number;
	std::string nickname;
	std::cout << "Enter name: ";
	std::getline(std::cin, name);
	this->contacts[this->empty_index % 8].set_name(name);
	std::cout << "Enter surname: ";
	std::getline(std::cin, surname);
	this->contacts[this->empty_index % 8].set_surname(surname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	this->contacts[this->empty_index % 8].set_phone_number(phone_number);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	this->contacts[this->empty_index % 8].set_nickname(nickname);
}
void PhoneBook::Search()
{
	this->get_data(this->contacts[this->empty_index - 1 > 0 ? this->empty_index
			- 1 : 0]);
}
