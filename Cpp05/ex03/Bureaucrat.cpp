#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat is created !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name,int grade) :name(name),grade(grade){
	if(grade > 150)
		throw GradeTooLowException();
	else if(grade < 1)
		throw  GradeTooHighException();
	std::cout << "Bureaucrat is created !" << std::endl;

}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy):name(copy.getName()),grade(copy.getGrade()) {
	std::cout << "Bureaucrat is Copied from " << copy.getName() << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat is destructed ! " << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c) {
	this->grade = c.getGrade();
	return *this;
}

void Bureaucrat::IncrementGrade() {
	if(this->grade - 1 < 1)
		throw  GradeTooHighException();
	this->grade -=1;
}

void Bureaucrat::DecrementGrade() {
	if(this->grade + 1 > 150)
		throw  GradeTooLowException();
	this->grade +=1;
}

void Bureaucrat::signForm(AForm &form) {
	if(form.getIsSigned())
	{
		std::cout << this->getName()
		<< " couldn't sign "
		<<  form.getName()
		<< " because form is already signed"
		<< std::endl;
		return;
	}
	try{
			form.beSigned(*this);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->getName() << " Couldn't sign AForm named "
		<< form.getName()
		<< " Because Grade is Too Low "
		<< std::endl;
		return;
	}
	std::cout << this->getName() << " Signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(const AForm &form) {
	try{
		form.execute(*this);
	}
	catch(std::exception &e)
	{
		std::cout << "There was a problem with the execution !" << std::endl;
		return;
	}
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

std::ostream & operator <<(std::ostream&o, Bureaucrat &b){
	return o
	<<  "Bureaucrat name, "
	<< b.getName()
	<< " Grade "
	<< b.getGrade();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High! Grade needs to be between 1 and 150\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low! Grade needs to be between 1 and 150\n";
}
