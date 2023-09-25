#include "RPN.hpp"

RPN::RPN(const std::string& str)
{
	std::istringstream iss(str);
	std::string token;
    this->isValidResult = checkErrors(str);
    if(isValidResult)
   {
        while (std::getline(iss, token, ' '))
        {
            if (token.empty())
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
}

bool RPN::checkOperator(const std::string& token)
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
    if(!this->isValidResult){
        throw std::invalid_argument("");
    }
	return std::stod(this->stack.top());
}

bool RPN::checkErrors(const std::string& arg) {
    std::istringstream iss(arg);
    std::string token;
    int valCount = 0;
    int operatorCount = 0;
    while (std::getline(iss, token, ' '))
    {
        if (token.empty())
            continue;
        try{
            double val = std::stod(token);
            if(val < 10)
            {
                valCount++;
            continue;
            }
        }
        catch(std::exception &e)
        {
            if(token == "*" || token == "/" || token == "+" || token =="-")
            {
                operatorCount++;
                continue;
            }
            return false;
        }
    }
    if(valCount - 1 != operatorCount)
            return false;
    return true;
}
