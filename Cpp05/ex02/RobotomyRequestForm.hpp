#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class RobotomyRequestForm: public AForm {
private:
	const std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &c);
	void execute(Bureaucrat const & executor) const;
};


#endif //ROBOTOMYREQUESTFORM_HPP
