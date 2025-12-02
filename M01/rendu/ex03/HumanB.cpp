#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ), 
								_weapon(NULL) {}

void	HumanB::attack( void ) const {
	if (_weapon == NULL)
		std::cout << _name << " attacks with nothing" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( const Weapon& weapon ) {
	_weapon = &weapon;	
}
