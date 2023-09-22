#include <stack>
#include <iostream>
#include <sstream>
#include <cstring>
class RPN
{
	private:
		std::stack<int> stack;
	public:
		RPN(std::string str);
		getResult();
};
