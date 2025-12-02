#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return NULL;
	Zombie *zs = new Zombie[N];
	int i = 0;

	while ( i < N ) {
		zs[i].setName(name);
		i++;
	}
	return (zs);	
}
