#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
private:
	const std::string name;
	bool isSigned;
	const int reqSignGrade;
	const int reqExecGrade;
public:
	AForm();
	AForm(std::string name , int reqSignGrade, int reqExecGrade);
	AForm(AForm &copy);
	virtual ~AForm();
	AForm &operator=(const AForm &c);
	const std::string &getName() const;
	bool getIsSigned() const;
	void setIsSigned(bool isSigned);
	int getReqSignGrade() const;
	int getReqExecGrade() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
	class GradeTooLowException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
	class FormNotSignedException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif //AFORM_HPP
