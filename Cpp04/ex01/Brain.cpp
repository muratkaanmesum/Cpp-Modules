#include "Brain.hpp"

Brain::Brain() {
	std::cout << "A brain is created !" << std::endl;
}

Brain::Brain(Brain &copy) {
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain is Destroyed !" << std::endl;
}

Brain &Brain::operator=(const Brain &c) {
	if(this == &c)
		return *this;
	std::cout<<"Brain copy Operator Called !" << std::endl;
	for(int i = 0; i < 100 ; i++){
		this->ideas[i] = c.ideas[i];
	}
	return  *this;
}
