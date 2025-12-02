#include "Zombie.hpp"

int main() {
	Zombie *z1 = newZombie( "Foo" );
	z1->announce();
	delete (z1);

	randomChump( "Bar" );
}
