#include "Harl.hpp"
int	find_index(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return (i);
	return (-1);
}
void complain_switch(char *level,Harl &harl)
{

	int index = find_index(level);
	switch (index) {
		case 0:
			harl.complain("DEBUG");
			goto c1;
		case 1:
		c1:
			harl.complain("INFO");
			goto c2;
		case 2:
			c2:
			harl.complain("WARNING");
			goto c3;
		case 3:
			c3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	Harl harl;
	complain_switch(argv[1],harl);
}