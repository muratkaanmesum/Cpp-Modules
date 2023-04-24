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
	void equip(AMateria *m);
	void unequip(int idx);

	void use(int idx, ICharacter &target);

	const std::string &getName() const;
};


#endif //CHARACTER_HPP
