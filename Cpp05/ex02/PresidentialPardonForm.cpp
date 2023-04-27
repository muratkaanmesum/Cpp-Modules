#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target):AForm("PresidentalpPardonForm",25,5),target(target) {
	std::cout << "PresidentalForm is created !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy):AForm(copy.getName(), 25,5),target(copy.target) {
	std::cout << "copy constructor called !"  << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresentialForm destroyed !" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c) {
	(void)c;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if(!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if(executor.getGrade() > this->getReqExecGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const {
	return target;
}

