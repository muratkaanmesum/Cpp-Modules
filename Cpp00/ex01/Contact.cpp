#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string name, std::string surname,
		std::string phone_number, std::string nickname)
{
	this->name = name;
	this->surname = surname;
	this->phone_number = phone_number;
	this->nickname = nickname;
}
Contact::~Contact()
{
	std::cout << "Contact Destroyed !" << std::endl;
}
void Contact::set_name(std::string name)
{
	this->name = name;
}
void Contact::set_surname(std::string surname)
{
	this->surname = surname;
}
void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}
void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}
std::string Contact::get_name()
{
	return (this->name);
}
std::string Contact::get_surname()
{
	return (this->surname);
}
std::string Contact::get_phone_number()
{
	return (this->phone_number);
}
std::string Contact::get_nickname()
{
	return (this->nickname);
}
Contact::Contact()
{
	std::cout << "Contact Created !" << std::endl;
}
void Contact::get_data(Contact contact)
{
	std::string name;
	std::cout << "Enter name: ";
	getline(std::cin, name);
	std::string surname;
	std::cout << "Enter surname: ";
	getline(std::cin, surname);
	std::string phone_number;
	std::cout << "Enter phone number: ";
	getline(std::cin, phone_number);
	std::string nickname;
	std::cout << "Enter nickname: ";
	getline(std::cin, nickname);
	contact.set_name(name);
	contact.set_surname(surname);
	contact.set_phone_number(phone_number);
	contact.set_nickname(nickname);
}
