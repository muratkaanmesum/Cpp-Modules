#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	RPN rpn((std::string(argv[1])));
	std::cout << rpn.getResult() << std::endl;
	return 0;
}
