#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
private:
	const std::string name;
	bool isSigned;
	const int reqSignGrade;
	const int reqExecGrade;
public:
	Form();
	Form(std::string name , int reqSignGrade, int reqExecGrade);
	Form(Form &copy);
	~Form();
	Form &operator=(const Form &c);
	const std::string &getName() const;
	bool getIsSigned() const;
	void setIsSigned(bool isSigned);
	int getReqSignGrade() const;
	int getReqExecGrade() const;
	void beSigned(Bureaucrat &b);
	class GradeTooHighException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
	class GradeTooLowException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
};
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //FORM_HPP
