#include <stack>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
class RPN
{
private:
	std::stack<std::string> stack;
	bool checkOperator(std::string token);
	void handleStackOperation();

public:
	RPN(std::string arg);
	double getResult();
};
