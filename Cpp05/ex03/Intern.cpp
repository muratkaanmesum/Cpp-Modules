#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern is Created !" << std::endl;
}

Intern::Intern(Intern &copy) {
	*this = copy;
	std::cout << "Copy constructor called ! " << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern is destroyed ! " << std::endl;
}

Intern &Intern::operator=(const Intern &c) {
	(void)c;
	return *this;
}

AForm *Intern::makeForm(const std::string &name, const std::string target) {
	AForm *forms[3] = {new RobotomyRequestForm(target),
					  new PresidentialPardonForm(target),
					  new ShrubberyCreationForm(target) };
	std::string names[3] = {"robotomy request", "presential pardon","shruberry creation"};
	for (int i = 0; i < 3 ; ++i) {
		if(names[i] == name) {
			for (int j = 0; j < 3; ++j) {
				if(i != j)
					delete forms[j];
			}
			std::cout << "Intern creates " << name << std::endl;
			return forms[i];
		}
	}
	for (int j = 0; j < 3; ++j) {
			delete forms[j];
	}
	std::cout << "This form name doesn't exist " << std::endl;
	return NULL;
}

