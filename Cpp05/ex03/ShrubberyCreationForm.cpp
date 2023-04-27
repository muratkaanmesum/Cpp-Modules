#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("Shrubbery",145,137) ,target(target){
	std::cout << "Shrubbery form is created ! "<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default",145,137) {
	std::cout << "Shrubbery form default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): AForm(copy), target(copy.target) {
std::cout << "Copy Constructor called ! " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery is destroyed !" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c) {
	(void)c;
		return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	(void)executor;
	std::ofstream file((this->getTarget() + "_shrubbery").c_str());
	file << "       _-_\n"
			"    /~~   ~~\\\n"
			" /~~         ~~\\\n"
			"{               }\n"
			" \\  _-     -_  /\n"
			"   ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\"
			<< std::endl;
	file.close();
}

const std::string &ShrubberyCreationForm::getTarget() const {
	return target;
}

