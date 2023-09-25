#include <stack>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
class RPN
{
private:
	std::stack<std::string> stack;
    bool isValidResult;
	static bool checkOperator(const std::string& token);
	void handleStackOperation();
    bool checkErrors(const std::string& arg);
public:
	RPN(const std::string& arg);
	double getResult();
};
