#include "HumanA.hpp"

HumanA::HumanA( std::string name, const Weapon& club ) : _name( name ), _weapon(club) {}

void	HumanA::attack( void ) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}


