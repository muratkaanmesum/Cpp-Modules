#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
class PresidentialPardonForm :public AForm{
private:
public:
	const std::string &getTarget() const;

private:
	const std::string target;
public:
	PresidentialPardonForm(std::string target);

	PresidentialPardonForm(PresidentialPardonForm &copy);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
	void execute(const Bureaucrat &executor) const;
};


#endif
