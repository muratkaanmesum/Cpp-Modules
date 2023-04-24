#include "Bureaucrat.hpp"
int main(){
	Bureaucrat b1("Test",5);
	Bureaucrat b2 ("Test2",6);
	Form form("TestForm",5,5);
	b1.signForm(form);
	b2.signForm(form);
}