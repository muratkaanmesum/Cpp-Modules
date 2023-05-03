#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
  private:
	Brain *brain;

  public:
	Cat();
	Cat(Cat &copy);
	~Cat();
	Cat &operator=(const Cat &c);
	void makeSound() const;
	Brain *GetBrain();
};

#endif
