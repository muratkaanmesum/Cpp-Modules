#include "Contact.hpp"
#include <iostream>
Contact::~Contact()
{
	std::cout << "Contact Destroyed !" << std::endl;
}
void Contact::set_firstname(std::string name)
{
	this->first_name= name;
}
void Contact::set_lastname(std::string surname)
{
	this->last_name = surname;
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

std::string Contact::get_firstname()
{
	return (this->first_name);
}
std::string Contact::get_lastname()
{
	return (this->last_name);
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
void Contact::print_data()
{
	std::cout << "First name : " << this->get_firstname() << std::endl;
	std::cout << "First name : " << this->get_lastname() << std::endl;
	std::cout << "Phone number : " << this->get_phone_number() << std::endl;
	std::cout << "Nickname : " << this->get_nickname() << std::endl;
	std::cout << "Secret : " << this->get_darkest_secret() << std::endl;

}
Contact::Contact()
{
	std::cout << "Contact Created !" << std::endl;
}
