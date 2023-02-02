#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
class Contact
{
  private:
	std::string name;
	std::string surname;
	std::string phone_number;
	std::string nickname;
	std::string darkest_secret;

  public:
	Contact();
	~Contact();
	void set_name(std::string name);
	void set_surname(std::string surname);
	void set_phone_number(std::string phone_number);
	void set_nickname(std::string nickname);
	void set_darkest_secret(std::string darkest_secret);

	std::string get_darkest_secret();
	std::string get_name();
	std::string get_surname();
	std::string get_phone_number();
	std::string get_nickname();
};

#endif
