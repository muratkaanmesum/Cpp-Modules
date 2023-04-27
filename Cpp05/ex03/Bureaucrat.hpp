#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"
class AForm;
class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name,int grade);
	Bureaucrat(Bureaucrat &copy);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &c);
	void executeForm(AForm const & form);
	const std::string &getName() const;
	int getGrade() const;
	void IncrementGrade();
	void DecrementGrade();
	void signForm(AForm &form);
	class GradeTooHighException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
	class GradeTooLowException: public std::exception{
	public:
		virtual const char *what()const throw();
	};
};
std::ostream & operator <<(std::ostream&o, Bureaucrat &b);

#endif //BUREAUCRAT_HPP
