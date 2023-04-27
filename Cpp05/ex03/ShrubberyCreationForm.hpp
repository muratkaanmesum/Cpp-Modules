#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm {
private:
	const std::string target;
public:
	const std::string &getTarget() const;

	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
	void execute(Bureaucrat const & executor) const;
};


#endif //SHRUBBERYCREATIONFORM_HPP
