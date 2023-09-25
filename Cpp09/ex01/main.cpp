#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	RPN rpn((std::string(argv[1])));
    try{
	std::cout << rpn.getResult() << std::endl;
    }
    catch(std::exception &e){
        std::cout << "Error" << std::endl;
    }
	return 0;
}
