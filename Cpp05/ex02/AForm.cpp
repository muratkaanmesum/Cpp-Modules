#include "AForm.hpp"
AForm::AForm(std::string name, int reqSignGrade, int reqExecGrade) : name(name), reqSignGrade(reqSignGrade), reqExecGrade(reqExecGrade){
	this->isSigned = false;
}

AForm::AForm(AForm &copy) : name(copy.name), isSigned(copy.isSigned), reqSignGrade(copy.reqSignGrade), reqExecGrade(copy.reqExecGrade) {
	std::cout << "AForm copy constructor called !" << std::endl;
}

AForm::~AForm() {
	std::cout << "From is destructed !" << std::endl;
}

AForm &AForm::operator=(const AForm &c) {
	if(this != &c)
		this->isSigned = c.isSigned;
	return *this;
}

const std::string &AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

void AForm::setIsSigned(bool isSigned) {
	AForm::isSigned = isSigned;
}

int AForm::getReqSignGrade() const {
	return reqSignGrade;
}

int AForm::getReqExecGrade() const {
	return reqExecGrade;
}

void AForm::beSigned(Bureaucrat &b) {
	if(this->getReqSignGrade() < b.getGrade())
		throw GradeTooLowException();

	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "name: " << form.getName() << " isSigned: " << form.getIsSigned() << " reqSignGrade: " << form.getReqExecGrade()
	   << " reqExecGrade: " << form.getReqExecGrade();
	return os;
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade is Too Low !\n";
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade is Too high !\n";

}

const char *AForm::FormNotSignedException::what() const throw() {
	return "This Form is not signed!\n";
}
