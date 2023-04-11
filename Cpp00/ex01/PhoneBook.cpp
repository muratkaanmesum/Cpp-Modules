#include "PhoneBook.hpp"
#include <cstring>
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
	std::cout << "Name: " << contact.get_firstname() << std::endl;
	std::cout << "Surname: " << contact.get_lastname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
}
void PhoneBook::add_data()
{
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string nickname;
	std::string secret;
	first_name = get_input("Enter First name");
	this->contacts[this->empty_index % 8].set_firstname(first_name);
	last_name = get_input("Enter Last name");
	this->contacts[this->empty_index % 8].set_lastname(last_name);
	phone_number = get_input("Enter Phone number");
	this->contacts[this->empty_index % 8].set_phone_number(phone_number);
	nickname = get_input("Enter Nickname");
	this->contacts[this->empty_index % 8].set_nickname(nickname);
	secret = get_input("Enter Secret");
	this->contacts[this->empty_index % 8].set_darkest_secret(secret);
}

void PhoneBook::Search()
{
	int	i;
	int	index;

	std::cout << std::setw(10) << "index"
				<< "|"
				<< std::setw(10)
				<< "first name"
				<< "|"
				<< std::setw(10)
				<< "last name"
				<< "|"
				<< std::setw(10)
				<< "nickname"
				<< std::endl;
	i = 0;
	while (i < this->empty_index && i < 8)
	{
		std::string first_name = this->contacts[i].get_firstname();
		std::string last_name = this->contacts[i].get_lastname();
		std::string nickname = this->contacts[i].get_nickname();
		std::cout << std::setw(10) << i << "|";
		if (first_name.length() > 10)
			std::cout << std::setw(9) << first_name.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << first_name;
		std::cout << "|";
		if (last_name.length() > 10)
			std::cout << std::setw(9) << last_name.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << last_name;
		std::cout << "|";
		if (nickname.length() > 10)
			std::cout << std::setw(9) << nickname.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << nickname;
		std::cout << std::endl;
		i++;
	}
	while (true)
	{
		std::cout << "Enter an index : ";
		std::cin >> index;
		if (index >= 0 && index < 8 && index < empty_index)
		{
			this->contacts[index].print_data();
			break ;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
							'\n');
			std::cout << "wrong number. Try again!" << std::endl;
		}
	}
}
