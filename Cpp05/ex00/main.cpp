#include "Bureaucrat.hpp"
int main(){
	Bureaucrat b1("Test",2);
	//Bureaucrat b2("Test",151);
	//Bureaucrat b3("Test",0);
	std::cout <<  b1 << std::endl;
	b1.IncrementGrade();
	std::cout << b1 << std::endl;
	b1.DecrementGrade();
	b1.DecrementGrade();
	std::cout << b1 << std::endl;
	//b1.IncrementGrade();
	//b1.IncrementGrade();
	//b1.IncrementGrade();
}