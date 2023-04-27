#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(){
	Bureaucrat b1("Test",5);
	Bureaucrat b2 ("Test2",6);
	RobotomyRequestForm form("RoboTest");
	PresidentialPardonForm preForm("PresentalTest");
	ShrubberyCreationForm ShruFrom("ShruTest");
	b2.signForm(form);
	b2.executeForm(form);
	b2.executeForm(preForm);
	b1.signForm(preForm);
	b1.executeForm(preForm);
	b1.signForm(ShruFrom);
	b1.executeForm(ShruFrom);
}