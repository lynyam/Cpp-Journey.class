#include "Zombie.hpp"

int main() {
	int N = 5;
	Zombie *zs = zombieHorde( N, "Foo" );
	int i = 0;

	while ( i < N ) {
		zs[i].announce();
		i++;
	}
	delete [] zs;
}
