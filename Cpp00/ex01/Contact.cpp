#include "Contact.hpp"
#include <iostream>
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
void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
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
std::string Contact::get_darkest_secret()
{
	return this->darkest_secret;
}
Contact::Contact()
{
	std::cout << "Contact Created !" << std::endl;
}
