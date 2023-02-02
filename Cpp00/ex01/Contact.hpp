#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string nickname;
	std::string darkest_secret;

  public:
	Contact();
	~Contact();
	void set_firstname(std::string name);
	void set_lastname(std::string surname);
	void set_phone_number(std::string phone_number);
	void set_nickname(std::string nickname);
	void set_darkest_secret(std::string darkest_secret);
	void print_data();
	std::string get_darkest_secret();
	std::string get_firstname();
	std::string get_lastname();
	std::string get_phone_number();
	std::string get_nickname();
};

#endif
