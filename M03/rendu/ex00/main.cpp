#include "ClapTrap.hpp"

int	main() {
	ClapTrap	a("A");
	ClapTrap	b("B");

	a.attack("B");
	b.takeDamage(3);

	b.beRepaired(5);
	int i = 0;
	while ( i++ < 11)
		a.attack("B"); // va finir par ne plus avoir d'énergie

	b.takeDamage(50); // tombe à 0 hp
	b.beRepaired(10); // ne devrait pas marcher (plus de hp ? selon ton choix)

	return 0;
}
