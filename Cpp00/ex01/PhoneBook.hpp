
#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
#include <iomanip>
class PhoneBook
{
  private:
	Contact contacts[8];
	int empty_index;

  public:
	PhoneBook();
	~PhoneBook();
	void add_to_phonebook();
	void get_data(Contact contact);
	void add_data();
	void Search();
};
std::string  get_input(std::string message);
#endif
