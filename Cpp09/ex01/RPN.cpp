#include "RPN.hpp"

RPN::RPN(std::string str)
{
	std::stringstream ss(str);
	std::string token;
	while (std::getline(ss, token, " "))
	{
		if (token.size() == 0)
			continue;
		if(token >= "0" && token <= "9")
		{
		}
	}
}
