#include "PhoneBook.hpp"
#include <iostream>
#include <cstring>

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

	std::cout << "Enter first_name: ";
	std::getline(std::cin, first_name);
	this->contacts[this->empty_index % 8].set_firstname(first_name);
	std::cout << "Enter surname: ";
	std::getline(std::cin, last_name);
	this->contacts[this->empty_index % 8].set_lastname(last_name);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	this->contacts[this->empty_index % 8].set_phone_number(phone_number);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	this->contacts[this->empty_index % 8].set_nickname(nickname);
	std::cout << "Enter secret: ";
	std::getline(std::cin, secret);
	this->contacts[this->empty_index % 8].set_darkest_secret(secret);
}

void PhoneBook::Search()
{
    std::cout << "     index|" << "first_name|" << " last_name|" << "  nickname|"
	<<std::endl;
    int i = 0;
    while (i < this->empty_index)
    {
        std::string first_name = this->contacts[i].get_firstname();
        std::string last_name = this->contacts[i].get_lastname();
        std::string  nickname = this->contacts[i].get_nickname();
		print_index(i);
        print_string(first_name);
        print_string(last_name);
        print_string(nickname);
        std::cout << std::endl;
        i++;
    }
	int index;
	while (true)
	{
		std::cout << "Enter an index : ";
		std::cin >> index;
		if(index >= 0 && index < 8 && index < empty_index)
		{
			this->contacts[index].print_data();
			break;
		}
		else
			std::cout << "wrong number. Try again!" << std::endl;
	}
}


