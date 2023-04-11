#include "Zombie.hpp"

Zombie *zombieHorde(int N , std::string name);
int main(){
	int N = 5;
	Zombie *zArray = zombieHorde(N,"test");
	for (int i = 0; i < N; ++i) {
		zArray[i].announce();
	}
	delete[] zArray;
}
