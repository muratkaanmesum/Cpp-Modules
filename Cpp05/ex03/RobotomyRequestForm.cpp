#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", 72,45),target(target){
	std::cout << "RobotomyRequestForm is Created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(): AForm("DefaultRobotomy", 72,45),target("default") {
	std::cout << "Default robotomy created ! " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): AForm(copy.getName(),72,45),target(copy.target) {
	std::cout << "Copy constructor called !" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequest Destroyed ! "<< std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c) {
	(void)c;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if(!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if(executor.getGrade() > this->getReqExecGrade())
		throw GradeTooLowException();
	std::cout << "Drilling noises" << std::endl;
	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomization failed" << std::endl;

}

