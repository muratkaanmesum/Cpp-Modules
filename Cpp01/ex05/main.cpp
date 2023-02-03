#include "Harl.hpp"
int main()
{
	Harl harl;
	std::cout <<"test"<<std::endl;
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("DEBUG");
}