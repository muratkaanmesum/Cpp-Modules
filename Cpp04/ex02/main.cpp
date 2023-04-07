#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int t = 0; t < 4; t++)
		delete animals[t];


}
