#include "Form.hpp"

Form::Form(std::string name, int reqSignGrade, int reqExecGrade) :name(name),reqSignGrade(reqSignGrade),reqExecGrade(reqExecGrade){
	this->isSigned = false;
}

Form::Form(Form &copy) :name(copy.name),isSigned(copy.isSigned),reqSignGrade(copy.reqSignGrade), reqExecGrade(copy.reqExecGrade) {
	std::cout << "Form copy constructor called !" << std::endl;
}

Form::~Form() {
	std::cout << "From is destructed !" << std::endl;
}

Form &Form::operator=(const Form &c) {
	if(this != &c)
		this->isSigned = c.isSigned;
	return *this;
}

const std::string &Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

void Form::setIsSigned(bool isSigned) {
	Form::isSigned = isSigned;
}

int Form::getReqSignGrade() const {
	return reqSignGrade;
}

int Form::getReqExecGrade() const {
	return reqExecGrade;
}

void Form::beSigned(Bureaucrat &b) {
	if(this->getReqSignGrade() < b.getGrade())
		throw GradeTooLowException();

	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.getName() << " isSigned: " << form.getIsSigned() << " reqSignGrade: " << form.getReqExecGrade()
	   << " reqExecGrade: " << form.getReqExecGrade();
	return os;
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is Too Low !\n";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is Too high !\n";

}
