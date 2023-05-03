#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;
	const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat() };
	for (int t = 0; t < 4; t++)
		delete animals[t];
}
