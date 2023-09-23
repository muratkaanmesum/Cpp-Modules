#include "RPN.hpp"

RPN::RPN(std::string str)
{
	// split string into tokens
	std::istringstream iss(str);
	std::string token;

	while (std::getline(iss, token, ' '))
	{
		if (token.size() == 0)
			continue;
		if (checkOperator(token))
		{
			stack.push(token);
			handleStackOperation();
		}
		else
			this->stack.push(token);
	}

}

bool RPN::checkOperator(std::string token)
{
	if (token == "+" || token == "-" || token == "/" || token == "*")
		return true;
	return false;
}

void RPN::handleStackOperation()
{
	std::string stackOp = this->stack.top();
	this->stack.pop();
	double firstVal = std::stod(this->stack.top());
	this->stack.pop();
	double secondVal = std::stod(this->stack.top());
	this->stack.pop();
	if (stackOp == "+")
		this->stack.push(std::to_string(secondVal + firstVal));
	if (stackOp == "*")
		this->stack.push(std::to_string(secondVal * firstVal));
	if (stackOp == "-")
		this->stack.push(std::to_string(secondVal - firstVal));
	if (stackOp == "/")
		this->stack.push(std::to_string(secondVal / firstVal));
}
double RPN::getResult()
{
	return std::stod(this->stack.top());
}
