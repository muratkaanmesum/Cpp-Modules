#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern &copy);
	~Intern();
	Intern &operator=(const Intern &c);
	AForm *makeForm(const std::string &name, std::string target);
};


#endif //INTERN_HPP
