#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
public:
	Brain();
	Brain(Brain &copy);
	~Brain();
	Brain &operator=(const Brain &c);
	std::string ideas[100];
};


#endif