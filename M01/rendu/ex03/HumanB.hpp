#ifndef _HUMANB_H_
# define _HUMANB_H_

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	public :
		explicit HumanB( std::string name );
		void	attack( void ) const;
		void	setWeapon( const Weapon& club );
	private :
		std::string		_name;
		const Weapon	*_weapon;
};

#endif
