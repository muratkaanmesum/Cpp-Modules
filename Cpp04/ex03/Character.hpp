#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
class Character: public  ICharacter{
private:
	std::string name;
	AMateria *inventory[4];
public:
	Character();
	Character(std::string name);
	Character(Character &copy);
	~Character();
	Character &operator=(const Character &c);
};


#endif //CHARACTER_HPP
