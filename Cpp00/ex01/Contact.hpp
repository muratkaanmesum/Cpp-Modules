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

  public:
	Contact(std::string name, std::string surname, std::string phone_number,
			std::string nickname);
	Contact();
	~Contact();
	void get_data(Contact contact);
	void set_name(std::string name);
	void set_surname(std::string surname);
	void set_phone_number(std::string phone_number);
	void set_nickname(std::string nickname);
	std::string get_name();
	std::string get_surname();
	std::string get_phone_number();
	std::string get_nickname();
};

#endif
